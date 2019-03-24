#include "triangle.h"
#include <stdio.h>

void triangle(int* TR_x, int* TR_y, int TR_n)
{
    printf("\n");
    for (int i = 0; i < TR_n * 3; i += 3) {
        printf("Enter x1 y1, x2 y2, x3 y3 for triangle #%d: ", i / 3 + 1);
        scanf("%d%d%d%d%d%d",
              &TR_x[i],
              &TR_y[i],
              &TR_x[i + 1],
              &TR_y[i + 1],
              &TR_x[i + 2],
              &TR_y[i + 2]);
    }
}