#include <stdlib.h>
#include <stdio.h>
#include <math.h>


float (*IcosahedronVerts(float circumRad))[3] { //This returns an array of pointers, with each of those pointers pointing towards the 3 value position arrays
    //First it gets the pointer to the result of the function, the [12][3] array, and then [3] tells it that the pointers are to 3-element arrays. It still doesn't entirely make sense, but it works
    
    float golden = 1.61803398875f; //The golden ratio

    //The icosahedron will have 12 vertices, and 20 faces. The IcosahedronIndicies function should return a 20 by 3 array with the verticies that make each face up listed.
    
    static float vertexArray[12][3];
    
    //This is all the verticies and they were a pain to manually do so hopefully they are correct

    vertexArray[0][0], vertexArray[1][0], vertexArray[2][2], vertexArray[3][1], vertexArray[4][1], vertexArray[5][2] = 0;
    vertexArray[6][2], vertexArray[7][1], vertexArray[8][2], vertexArray[9][1], vertexArray[10][0], vertexArray[11][0] = 0;
    vertexArray[0][1], vertexArray[1][1], vertexArray[2][0], vertexArray[3][2], vertexArray[4][2], vertexArray[6][0] = circumRad;
    vertexArray[5][0], vertexArray[7][2], vertexArray[8][0], vertexArray[9][2], vertexArray[10][1], vertexArray[11][1] = -circumRad;
    vertexArray[0][2], vertexArray[2][1], vertexArray[3][0], vertexArray[5][1], vertexArray[7][0], vertexArray[10][2] = golden * circumRad;
    vertexArray[1][2], vertexArray[4][0], vertexArray[6][1], vertexArray[8][1], vertexArray[9][0], vertexArray[11][2] = -golden * circumRad;

    return vertexArray;
}

int (*IcosahedronIndices())[3] { //Same drill, returns the array of pointers to each 3 value index array

    //The icosahedron will have 12 vertices, and 20 faces

    static int indexArray[20][3];

    //This one is even more of a pain, since I can't just indexArray[0] = {1, 0, 1};

    indexArray[0][0] = 0;
    indexArray[0][1] = 1;
    indexArray[0][2] = 4;
    indexArray[1][0] = 0;
    indexArray[1][1] = 4;
    indexArray[1][2] = 9;
    indexArray[2][0] = 9;
    indexArray[2][1] = 4;
    indexArray[2][2] = 5;
    indexArray[3][0] = 4;
    indexArray[3][1] = 8;
    indexArray[3][2] = 5;
    indexArray[4][0] = 4;
    indexArray[4][1] = 1;
    indexArray[4][2] = 8;
    indexArray[5][0] = 8;
    indexArray[5][1] = 1;
    indexArray[5][2] = 10;
    indexArray[6][0] = 8;
    indexArray[6][1] = 10;
    indexArray[6][2] = 3;
    indexArray[7][0] = 5;
    indexArray[7][1] = 8;
    indexArray[7][2] = 3;
    indexArray[8][0] = 5;
    indexArray[8][1] = 3;
    indexArray[8][2] = 2;
    indexArray[9][0] = 2;
    indexArray[9][1] = 3;
    indexArray[9][2] = 7;
    //Halfway
    indexArray[10][0] = 7;
    indexArray[10][1] = 3;
    indexArray[10][2] = 10;
    indexArray[11][0] = 7;
    indexArray[11][1] = 10;
    indexArray[11][2] = 6;
    indexArray[12][0] = 7;
    indexArray[12][1] = 6;
    indexArray[12][2] = 11;
    indexArray[13][0] = 11;
    indexArray[13][1] = 6;
    indexArray[13][2] = 0;
    indexArray[14][0] = 0;
    indexArray[14][1] = 6;
    indexArray[14][2] = 1;
    indexArray[15][0] = 6;
    indexArray[15][1] = 10;
    indexArray[15][2] = 1;
    indexArray[16][0] = 9;
    indexArray[16][1] = 11;
    indexArray[16][2] = 0;
    indexArray[17][0] = 9;
    indexArray[17][1] = 2;
    indexArray[17][2] = 11;
    indexArray[18][0] = 9;
    indexArray[18][1] = 5;
    indexArray[18][2] = 2;
    indexArray[19][0] = 7;
    indexArray[19][1] = 11;
    indexArray[19][2] = 2;
    //Done!
    return indexArray;
}