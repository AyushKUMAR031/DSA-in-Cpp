#include <stdio.h>

int main() {
    int matrix[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ", matrix[i][j]);
        }
            printf("\n");
    }
    return 0;
}

// A multi-dimensional array is essentially an array of arrays.
//2D example - type arrayName[rows][columns];
//3D example - type arrayName[rows][columns][depth];