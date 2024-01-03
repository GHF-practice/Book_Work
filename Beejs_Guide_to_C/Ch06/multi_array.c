#include <stdio.h>

int main(void){

    int row, col;

    int a[2][5] = { //initialize a 2d array
        {0, 1, 2, 3, 4},
        {5, 6, 7, 8, 9}
    };

    for (row = 0; row < 2; row++){

        for (col = 0; col < 5; col++){

            printf("(%d,%d) = %d\n", row, col, a[row][col]);

        }

    }

    // You can initiliaze multi dimensional arrays without declaring them also;
    // int a[10];
    // int b[2][7];
    // int c[4][5][6];
    // row-major order -- aka -- row first and column second.
}
