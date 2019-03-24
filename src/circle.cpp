#include "circle.h"
#include <stdio.h>

void circle(int* CIR_x, int* CIR_y, int* CIR_r, int CIR_n)
{
    printf("\n");
    for (int i = 0; i < CIR_n; i++) {
        printf("Enter x, y, r for circle #%d: ", i + 1);
        scanf("%d%d%d", &CIR_x[i], &CIR_y[i], &CIR_r[i]);
    }
}