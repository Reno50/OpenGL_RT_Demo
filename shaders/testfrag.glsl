#version 430
#extension GL_ARB_enhanced_layouts : enable

out vec4 FragColor;

in vec2 TexCoord;

const float kEpsilon = 0.000000000000088;

uniform vec2 screenSize;

layout (std430, binding = 2) buffer placeholder {
    vec3 cameraPos;
    vec3 cameraDir;
    float verticeData[];
};

struct HitInfo {
    float dist;
    vec3 normal;
};

const float far = 10000; // Farthest distance a ray can go

const float minTravel = 0.1; // Minimum distance for a ray to travel before another bounce

float ScalarTriple(vec3 u, vec3 v, vec3 w) {
    return dot(cross(u, v), w);
}

bool PointInTriangle(in vec3 point0, in vec3 point1, in vec3 point2, in vec3 test0) {
    //https://gdbooks.gitbooks.io/3dcollisions/content/Chapter4/point_in_triangle.html

    // I have no idea how shader references and affecting variables in functions works so I'm playing it safe
    vec3 p0 = point0;
    vec3 p1 = point1;
    vec3 p2 = point2;
    vec3 test = test0;

    // For the algorithm, we make test the origin
    p0 -= test;
    p1 -= test;
    p2 -= test;

    // Okay now am not sure if these have anything with finding the uv on the plane, but I don't intend to deal with that in this function

    vec3 u = cross(p1, p2);
    vec3 v = cross(p2, p0);
    vec3 h = cross(p0, p1);
    // If the normals are facing in the same direction, return true, else return false

    if (dot(u, v) < 0.0) {
        return false;
    }
    if (dot(u, h) < 0.0) {
        return false;
    }

    // All normals must be facing the same way to get this far, so it returns true
    return true;
}

bool RayTriangleIntersect(in vec3 orig, in vec3 dir, in vec3 v0, in vec3 v1, in vec3 v2, inout HitInfo info) {
    //https://math.stackexchange.com/questions/1979876/ray-casting-algorithm-in-ray-triangle-intersection

    // The primary equation is pcol(t) = psub0 + (t * dhat)

    // Initial position of the ray (psub0 = (a1, b1, c1) in the SO post)
    vec3 psub0 = orig;

    // dhat (direction, basically) always has a magnitude of one
    vec3 dhat = normalize(dir);

    // The normal of the triangle is important, as nhat (which is the plain normal consisting of (nx, ny, nz)) must be known
    //v1-v0 = edge 1
    //v2-v0 = edge 2
    vec3 trinorm = normalize(cross((v1-v0), (v2-v0)));

    // One more important variable is nsubd which is the dot of the normal and any point on the triangle, just using one of the vertices works just fine
    float nsubd = dot(trinorm, v0);

    // Now it comes together, but first we check if the denominator is 0 which would mean the triangle is parallell to the ray.
    float denominator = dot(dhat, trinorm);
    
    if (denominator == 0) {
        return false;
    }

    float numerator = nsubd - (dot(psub0, trinorm));

    // Now we find the t in the original equation, basically the distance to the hit
    float t = numerator / denominator;

    // Typical method usually gets the cartesian coords of the hit on the plane of the triangle as (U, V)
    // (0, 0) on this plane is the clockwise end of the longest edge, (w, 0) is the other end of the longest edge, and (g, h) is the third vertex
    // h > 0, and 0 <= w <= g

    // For now, we'll skip this part because we want to make sure the previous code works first
    // We'll just use the current bool PointInTriangle code, but when we need the uvs we'll use the CoordsInTriangle function

    // However, when getting the point of the ray at intersection, the formula in the answer seems wrong when it says the pfinal = pinitial + t * nhat, where nhat is the normal of the plane
    // I would have assumed it would be dhat, the ray's direction, instead of nhat; this one time, I'll take it into my own hands (and also the dhat formula is mentioned at the start of the answer)

    vec3 final = psub0 + t * dhat;

    if (PointInTriangle(v0, v1, v2, final)) {
        return true;
    } else { return false; }
}

vec3 GetColorOfRay(in vec3 rayPosition, in vec3 rayDirection, in int triangleNum) {
    HitInfo hitInfo;
    hitInfo.dist = far;

    vec3 ret = vec3(0.1, 0.1, 0.1);

    // Intersects triangle with points verticeData[(triangleNum * 3) - (1 through 3)]
    // Point 1 is (0, 1, 2)
    vec3 point1 = vec3(verticeData[(triangleNum * 9) - 9], verticeData[(triangleNum * 9) - 8], verticeData[(triangleNum * 9) - 7]);
    // Point 2 is (3, 4, 5)
    vec3 point2 = vec3(verticeData[(triangleNum * 9) - 6], verticeData[(triangleNum * 9) - 5], verticeData[(triangleNum * 9) - 4]);
    // Point 3 is (6, 7, 8)
    vec3 point3 = vec3(verticeData[(triangleNum * 9) - 3], verticeData[(triangleNum * 9) - 2], verticeData[(triangleNum * 9) - 1]);
    // Check if it hits and send the color
    if (RayTriangleIntersect(rayPosition, rayDirection, point1, point2, point3, hitInfo)) {
        ret = vec3(cameraDir.x, cameraDir.y, cameraDir.z);
    }
    return ret;
}

void main()
{
    // The ray target on the pixel plane, -1 to +1
    vec2 pixelTarget = TexCoord; //abs(TexCoord * 2.0 - 1.0); The abs was acting up so uh i just am using a plane 0 to 1

    vec3 rayPos = vec3(0.0, 0.0, 0.0) + cameraPos; // Ray starts at origin

    vec3 rayTarget = vec3(pixelTarget, 1.0); // The ray is shooting at the pixel but far away from the camera

    vec3 rayDir = normalize(rayTarget - rayPos);

    vec3 color = GetColorOfRay(rayPos, rayDir, 1);

    FragColor = vec4(color, 0.0);
} 