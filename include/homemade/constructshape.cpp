#include <stdlib.h>
#include <stdio.h>
#include <math.h>

class ShapeConstructor {
    public:
        int skipIndices;
        ShapeConstructor(int totalAttribs) { //The vertex array and the total attribs of said vertex, it just assumes the vertecies start at 1 and the next set is at 3 + totalattribs
            skipIndices = totalAttribs;
        }

        float (*IcosahedronVerts(float edgeLen, float circumRad))[3] { //This returns an array of pointers, with each of those pointers pointing towards the 3 value position arrays
            //First it gets the pointer to the result of the function, the [20][3] array, and then [3] tells it that the pointers are to 3-element arrays. It still doesn't entirely make sense, but it works
            //Do fancy stuff
            static float vertexArray[20][3];
            vertexArray[0][0] = 0.0f;

            return vertexArray;
        }
};