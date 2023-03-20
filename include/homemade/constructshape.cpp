#include <stdlib.h>
#include <stdio.h>
#include <math.h>


float* IcosahedronVerts(float circumRad) { //This used to return an array of pointers, with each of those pointers pointing towards the 3 value position arrays
    //First it gets the pointer to the result of the function, the [12][3] array, and then [3] tells it that the pointers are to 3-element arrays.
    //It still doesn't entirely make sense, but it worked. Until I realized it would be easier to use a 1-dimensional array for other things anyway, so I changed it
    
    float golden = 1.61803398875f; //The golden ratio

    //The icosahedron will have 12 vertices, and 20 faces. The IcosahedronIndicies function should return a 60 element array with the verticies that make each face up listed.
    //The vertex function, however, will just return 36 values

    static float vertexArray[36] = {
        0, circumRad, golden * circumRad, 0, circumRad, -golden * circumRad, circumRad, golden * circumRad, 0, golden * circumRad, 0, circumRad, -golden * circumRad, 0, circumRad, -circumRad,
        golden * circumRad, 0, circumRad, -golden * circumRad, 0, golden * circumRad, 0, -circumRad, -circumRad, -golden * circumRad, 0, -golden * circumRad,
        0, -circumRad, 0, -circumRad, golden * circumRad, 0, -circumRad, -golden * circumRad};

    
    //This is all the verticies and they were a pain to manually do so hopefully they are correct

    vertexArray[0], vertexArray[3], vertexArray[8], vertexArray[10], vertexArray[13], vertexArray[17] = 0;
    vertexArray[20], vertexArray[22], vertexArray[26], vertexArray[28], vertexArray[30], vertexArray[33] = 0;
    vertexArray[1], vertexArray[4], vertexArray[6], vertexArray[11], vertexArray[14], vertexArray[18] = circumRad;
    vertexArray[15], vertexArray[23], vertexArray[24], vertexArray[29], vertexArray[31], vertexArray[34] = -circumRad;
    vertexArray[2], vertexArray[7], vertexArray[9], vertexArray[16], vertexArray[21], vertexArray[32] = golden * circumRad;
    vertexArray[5], vertexArray[12], vertexArray[19], vertexArray[25], vertexArray[27], vertexArray[35] = -golden * circumRad;

    return vertexArray;
}

int* IcosahedronIndices() { //Same drill, returns the array of pointers to each 3 value index array

    //The icosahedron will have 12 vertices, and 20 faces

    static int indexArray[60];

    //This one is even more of a pain, since I can't just indexArray[0] = {1, 0, 1};

    indexArray[0] = 0;
    indexArray[1] = 1;
    indexArray[2] = 4;
    indexArray[3] = 0;
    indexArray[4] = 4;
    indexArray[5] = 9;
    indexArray[6] = 9;
    indexArray[7] = 4;
    indexArray[8] = 5;
    indexArray[9] = 4;
    indexArray[10] = 8;
    indexArray[11] = 5;
    indexArray[12] = 4;
    indexArray[13] = 1;
    indexArray[14] = 8;
    indexArray[15] = 8;
    indexArray[16] = 1;
    indexArray[17] = 10;
    indexArray[18] = 8;
    indexArray[19] = 10;
    indexArray[20] = 3;
    indexArray[21] = 5;
    indexArray[22] = 8;
    indexArray[23] = 3;
    indexArray[24] = 5;
    indexArray[25] = 3;
    indexArray[26] = 2;
    indexArray[27] = 2;
    indexArray[28] = 3;
    indexArray[29] = 7;
    //Halfway
    indexArray[30] = 7;
    indexArray[31] = 3;
    indexArray[32] = 10;
    indexArray[33] = 7;
    indexArray[34] = 10;
    indexArray[35] = 6;
    indexArray[36] = 7;
    indexArray[37] = 6;
    indexArray[38] = 11;
    indexArray[39] = 11;
    indexArray[40] = 6;
    indexArray[41] = 0;
    indexArray[42] = 0;
    indexArray[43] = 6;
    indexArray[44] = 1;
    indexArray[45] = 6;
    indexArray[46] = 10;
    indexArray[47] = 1;
    indexArray[48] = 9;
    indexArray[49] = 11;
    indexArray[50] = 0;
    indexArray[51] = 9;
    indexArray[52] = 2;
    indexArray[53] = 11;
    indexArray[54] = 9;
    indexArray[55] = 5;
    indexArray[56] = 2;
    indexArray[57] = 7;
    indexArray[58] = 11;
    indexArray[59] = 2;
    //Done!
    return indexArray;
}

float* PyramidVerts(float radius) { //Returning texture coordinates and vertices in the same array
    float rootthreeovertwo = sqrt(3) / 2;
    
    //Construct the vertex array, top first, then each side vertex (clockwise)
    static float vertexArray[20] = {
        0, radius, 0, //topmost point
        0.5f, 1.0f,
        radius/2, 0, 0, //rightmost point
        1.0f, 0.0f,
        -rootthreeovertwo*radius, 0, radius/2, //closer leftmost point
        0.0f, 0.0f,
        -rootthreeovertwo*radius, 0, radius/-2, //farther leftmost point
        1.0f, 0.0f
    };

    return vertexArray;
}

int* PyramidIndices() {

    //Handle faces clockwise starting at the back-right face and ending at the bottom
    static int indexArray[12] = {
        0, 3, 1,
        0, 1, 2,
        0, 2, 3,
        1, 2, 3
    };

    return indexArray;
}