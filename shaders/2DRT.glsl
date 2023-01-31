//Major performance setting
const float RAYS_PER_PIXEL = 2.;
const float phi = 1.6180339887498948482045868343656381177203091798058;

#define USE_HASH 0
#define EPSILON 0.5/iResolution.x
#define PI 3.141596

float tau = 6.283185307179586;
float hash(float p) { return fract(sin(p) * 43758.5453123);}

//#define WEIGHTED 1

float sdSphere( vec2 p, float s )
{
  return length(p)-s;
}

float sdBox( vec2 p, vec2 b )
{
  vec2 d = abs(p) - b;
  return min(max(d.x,d.y),0.0) + length(max(d,0.0));
}

struct Material{
	float emission;
    vec3 color;
};
Material surfaces[8];

void setupSurfaces()
{
    surfaces[0] = Material(0., vec3(0.,1.,1.));
    surfaces[1] = Material(0., vec3(0.,1.,1.));
    surfaces[2] = Material(0., vec3(0.,1.,1.));
    surfaces[3] = Material(0., vec3(0.,1.,1.));
    surfaces[4] = Material(4., vec3(0.5,0.5,0.5)); //Light
    surfaces[5] = Material(0., vec3(0.,1.,1.));
    surfaces[6] = Material(0., vec3(0.,1.,1.));
    surfaces[7] = Material(0., vec3(0.,1.,1.));
}

#define lightTime iTime * 2.0
#define LIGHT_DIST sdSphere(uv - vec2(sin(lightTime),cos(lightTime)*(sin(lightTime*1.2123341) + 1.)*0.5), 0.1)
#define BOX1 sdBox(uv - vec2(1.2,0), vec2(0.05,0.4))
#define BOX2 sdSphere(uv - vec2(-0.9,-0.1), 0.1)

Material getMaterial(vec2 uv)
{
    float test = EPSILON;
    vec2 st = uv;
    st.x *= iResolution.y / iResolution.x;
    if(BOX1 < test)
    {
        return surfaces[0];
    }
    else if(BOX2 < test)
    {
        return surfaces[1];
    }
    else if(LIGHT_DIST < test)
    {
        return surfaces[4];
    }
    {
    	return Material(0., vec3(1.));
    }
}
float map(vec2 uv)
{
    float d = BOX1; //Check which box the UV is in
    d = min(d,BOX2);
    d = min(d,LIGHT_DIST);
    return d;
}

float getEmissionFromBuffer(vec2 st)
{
    vec2 pix = 1./iResolution.xy;
    st = (st * iResolution.xy + 0.5)/iResolution.xy;
    float e = max(texture(iChannel0, (st) + pix * vec2(-1,1)).a,0.);
    e = max(max(texture(iChannel0, (st) + pix * vec2(0,1)).a,0.),e);
    e = max(max(texture(iChannel0, (st) + pix * vec2(1,1)).a,0.),e);
    e = max(max(texture(iChannel0, (st) + pix * vec2(-1,0)).a,0.),e);
    e = max(max(texture(iChannel0, (st) + pix * vec2(0,0)).a,0.),e);
    e = max(max(texture(iChannel0, (st) + pix * vec2(1,0)).a,0.),e);
    e = max(max(texture(iChannel0, (st) + pix * vec2(-1,-1)).a,0.),e);
    e = max(max(texture(iChannel0, (st) + pix * vec2(0,-1)).a,0.),e);
    e = max(max(texture(iChannel0, (st) + pix * vec2(1,-1)).a,0.),e);
    return e;
}



bool trace(vec2 origin, vec2 ray, out vec2 hitPos, out float d)
{
    float t = 0.;
    float dist;
    vec2 samplePoint;
    for(int i = 0; i < 32; i++)
    {
        samplePoint = origin + ray * t;
        dist = map(samplePoint);
        t += dist;
        d = t;
        if(dist < EPSILON)
        {
            
            hitPos = samplePoint;
            return true;
        }
    }
    return false;
}

vec2 estimateNormal(vec2 p) 
{
    return normalize(vec2(
        map(vec2(p.x + EPSILON, p.y)) - map(vec2(p.x - EPSILON, p.y)),
        map(vec2(p.x, p.y + EPSILON)) - map(vec2(p.x, p.y - EPSILON))
    ));
}

float rand(vec2 p)
{
    return fract(sin(dot(p.xy ,vec2(12.9898,78.233))) * 43758.5453);
}

void mainImage( out vec4 fragColor, in vec2 fragCoord )
{
    setupSurfaces();
    vec2 uv = fragCoord/iResolution.xy;
    vec2 originalUv = uv;
    uv = uv * 2.0 - 1.0;
    float aspect = iResolution.x / iResolution.y;
    float invAspect = iResolution.y / iResolution.x;
    uv.x *= aspect;
    
    vec3 col = vec3(0.);
    float emis = 0.;
    
    for(float i = 0.; i < RAYS_PER_PIXEL; i++)
    {
        vec2 hitPos;
        float dist;
        float curAngle = fract(texture(iChannel2, originalUv).r + i * phi) * tau;
        vec2 randDirection = vec2(cos(curAngle),sin(curAngle));
        bool hit = trace(uv, randDirection, hitPos, dist);
        if(hit)
        {
            Material mat = getMaterial(hitPos);
            float d = max(dist,0.);
            vec2 st = hitPos;
            st.x *=  invAspect;
            st = (st + 1.0)*0.5;
            
            float lastEmission = 0.;
            if(mat.emission <= EPSILON)
            {
                
            	lastEmission = getEmissionFromBuffer(st);
                #ifdef WEIGHTED
                vec2 normal = estimateNormal(hitPos);
            	float c = clamp(dot(-randDirection,normal),0.,1.);
                lastEmission *= c;
                #endif
            }
            if( iFrame==0 || d < EPSILON) lastEmission = 0.0;
            
            float emission = mat.emission + lastEmission;
            emis += emission*0.6;
            col += (mat.emission + lastEmission)*mat.color;
        }
    }
    col /= RAYS_PER_PIXEL;
    emis /= RAYS_PER_PIXEL;
    
    vec2 st = fragCoord/iResolution.xy;
    vec3 oldCol  = texture(iChannel0, st).rgb;
    vec3 newCol = col;
    
    if(iFrame==0) oldCol = vec3(0.0);

    float hysterisis = 0.9;
    fragColor = vec4(mix(newCol, oldCol, hysterisis), emis );
    
}