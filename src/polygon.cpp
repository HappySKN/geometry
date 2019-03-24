#include "polygon.h"
#include <stdio.h>

void polygon(int** POL_x, int** POL_y, int* POL_v, int POL_n)
{
    printf("\n");
    for (int i = 0; i < POL_n; i++) {
        printf("Enter %d vertices of the form x y for polygon #%d: ",
               POL_v[i],
               i + 1);
        for (int j = 0; j < POL_v[i]; j++) {
            scanf("%d%d", &POL_x[i][j], &POL_y[i][j]);
        }
    }
}