#include "circle.h"
#include <stdio.h>

void circle(int* CIR_x, int* CIR_y, int* CIR_r, int CIR_n)
{
    for (int i = 0; i < CIR_n; i++) {
        printf("\nEnter x%d, y%d, r%d: ", i + 1, i + 1, i + 1);
        scanf("%d%d%d", &CIR_x[i], &CIR_y[i], &CIR_r[i]);
    }
}