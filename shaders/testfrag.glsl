#version 430
#extension GL_ARB_enhanced_layouts : enable

out vec4 FragColor;

in vec2 TexCoord;

const float kEpsilon = 0.00000000000088;

uniform vec2 screenSize;

layout (std430, binding = 2) buffer placeholder {
    float vertex_array[];
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

bool rayTriangleIntersect(in vec3 orig, in vec3 dir, in vec3 v0, in vec3 v1, in vec3 v2, inout HitInfo info) {

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
        return false; // they are parallel, so they don't intersect! 

    // compute d parameter using equation 2
    float d = -dot(N, v0);
    
    // compute t (equation 3)
    float t = -(dot(N, orig) + d) / NdotRayDirection;
    
    // check if the triangle is behind the ray
    if (t < 0) return false; // the triangle is behind
 
    // compute the intersection point using equation 1
    vec3 P = orig + t * dir;
 
    // Step 2: inside-outside test
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

    info.dist = t;
    info.normal = N;
    return true; // this ray hits the triangle
}

vec3 GetColorOfRay(in vec3 rayPosition, in vec3 rayDirection) {
    
}

void main()
{
    // The ray target on the pixel plane, -1 to +1
    vec2 pixelTarget = abs(TexCoord * 2.0 - 1.0);

    vec3 rayPos = vec3(0.0, 0.0, 0.0); // Ray starts at origin

    vec3 rayTarget = vec3(pixelTarget, 1.0); // The ray is shooting at the pixel but far away from the camera

    vec3 rayDir = normalize(rayTarget - rayPos);

    FragColor = vec4(rayDir, 0.0);
} 