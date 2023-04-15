#version 430
#extension GL_ARB_enhanced_layouts : enable

out vec4 FragColor;

in vec2 TexCoord;

const float kEpsilon = 0.00000000000088;

uniform vec2 screenSize;

layout (std430, binding = 2) buffer placeholder {
    vec3 cameraPos;
    vec3 cameraDir;
    float verticeData[];
};

struct HitInfo
{
    float dist;
    vec3 normal;
};

const float far = 10000; // Farthest distance a ray can go

const float minTravel = 0.1; // Minimum distance for a ray to travel before another bounce

float ScalarTriple(vec3 u, vec3 v, vec3 w)
{
    return dot(cross(u, v), w);
}

bool RayTriangleIntersect(in vec3 orig, in vec3 dir, in vec3 v0, in vec3 v1, in vec3 v2, inout HitInfo info) {

    // Equation 1: P = O + tR  Collision point P equals origin O + (direction of ray R multiplied by distance t)
    // Equation 2: Ax + Bx + Cz + D = 0  A, B, and C make up the normal of the triangle in normal = (A, B, C) and x, y, and z are the coordinates of any point on the plane
    // Equation 3: t = - (dot(N, origin) + D) / dot(N, direction)

    // compute the plane's normal
    vec3 v0v1 = v1 - v0;
    vec3 v0v2 = v2 - v0;
    // no need to normalize
    vec3 N = v0v1 * v0v2; // N, cross product
    float area2 = N.length();
 
    // Step 1: finding P
    
    // check if the ray and plane are parallel.
    float NdotRayDirection = dot(N, dir);
    if (abs(NdotRayDirection) < kEpsilon) // almost 0
        return false; // they are parallel, so they don't intersect

    // compute d parameter using equation 2
    float d = -dot(N, v0);
    
    // compute t (equation 3)
    float t = -(dot(N, orig) + d) / NdotRayDirection;
    
    // check if the triangle is behind the ray
    if (t < 0) return false; // the triangle is behind
 
    // compute the intersection point using equation 1
    vec3 P = orig + t * dir;
 
    // Step 2: inside-outside test, test whether the point is on the left of every edge or not
    vec3 C; // vector perpendicular to triangle's plane
 
    // edge 0
    vec3 edge0 = v1 - v0; 
    vec3 vp0 = P - v0;
    C = edge0 * vp0;
    if (dot(N, C) < 0) return false; // P is on the right side
 
    // edge 1
    vec3 edge1 = v2 - v1; 
    vec3 vp1 = P - v1;
    C = edge1 * vp1;
    if (dot(N, C) < 0)  return false; // P is on the right side
 
    // edge 2
    vec3 edge2 = v0 - v2; 
    vec3 vp2 = P - v2;
    C = edge2 * vp2;
    if (dot(N, C) < 0) return false; // P is on the right side;

    /*
    float tempDist;
    if (abs(dir.x) > 0.1)
    {
        tempDist = (P.x - orig.x) / dir.x;
    }
    else if (abs(dir.y) > 0.1)
    {
        tempDist = (P.y - orig.y) / dir.y;
    }
    else
    {
        tempDist = (P.z - orig.z) / dir.z;
    }
    
	if (tempDist > minTravel && tempDist < info.dist)
    {
        info.dist = tempDist;        
        info.normal = N;
        return true;
    } 
    // As stated in the article https://blog.demofox.org/2020/05/25/casual-shadertoy-path-tracing-1-basic-camera-diffuse-emissive/,
    // If we accept the first hit we might miss things that are an even closer hit
    // However, for debug purposes, we'll just take the first hit for now
    */
    info.dist = t;
    info.normal = N;
    return true;
}

vec3 GetColorOfRay(in vec3 rayPosition, in vec3 rayDirection, in int triangleNum) {
    HitInfo hitInfo;
    hitInfo.dist = far;

    vec3 ret = vec3(0.0, 0.0, 1.0);

    // Intersects triangle with points vertex_array[(triangleNum * 3) - (1 through 3)]
    // Point 1 is (0, 1, 2)
    vec3 point1 = vec3(10.0, 1.0, 20.0);//vec3(vertex_array[(triangleNum * 9) - 9], vertex_array[(triangleNum * 9) - 8], vertex_array[(triangleNum * 9) - 7]);
    // Point 2 is (3, 4, 5)
    vec3 point2 = vec3(9.0, 0.0, 20.0);//vec3(vertex_array[(triangleNum * 9) - 6], vertex_array[(triangleNum * 9) - 5], vertex_array[(triangleNum * 9) - 4]);
    // Point 3 is (6, 7, 8)
    vec3 point3 = vec3(10.0, 0.0, 20.0);//vec3(vertex_array[(triangleNum * 9) - 3], vertex_array[(triangleNum * 9) - 2], vertex_array[(triangleNum * 9) - 1]);
    // Check if it hits and send the color
    if (RayTriangleIntersect(rayPosition, rayDirection, point1, point2, point3, hitInfo)) {
        ret = vec3(0.5, 0.0, 0.5);
    } else { 
        ret = vec3(0.1, 0.5, 0.1); 
    }
    return ret;
}

void main()
{
    // The ray target on the pixel plane, -1 to +1
    vec2 pixelTarget = abs(TexCoord * 2.0 - 1.0);

    vec3 rayPos = vec3(0.0, 0.0, 0.0); // Ray starts at origin

    vec3 rayTarget = vec3(pixelTarget, 1.0); // The ray is shooting at the pixel but far away from the camera

    vec3 rayDir = normalize(rayTarget - rayPos);

    vec3 color = GetColorOfRay(rayPos, rayDir, 1);

    FragColor = vec4(color, 0.0);
} 