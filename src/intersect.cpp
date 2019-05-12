#include "circle.h"
#include "polygon.h"
#include <math.h>
#include <stdio.h>

void intersect(int* CIR_x, int* CIR_y, int* CIR_r, int CIR_n)
{
    int x, y, z, h, h1, k, k1, inter[CIR_n][CIR_n] = {0};
    for (int i = 0; i < CIR_n; i++)
        for (int j = i + 1; j < CIR_n; j++) {
            x = abs(CIR_x[i] - CIR_x[j]);
            y = abs(CIR_y[i] - CIR_y[j]);
            z = CIR_r[i] + CIR_r[j];
            h = CIR_x[i] + CIR_r[i];
            k = CIR_y[i] + CIR_r[i];
            h1 = CIR_x[j] + CIR_r[j];
            k1 = CIR_y[j] + CIR_r[j];
            if (x <= z && y <= z && (h < h1 || k < k1) && CIR_r[i] > CIR_r[j]) {
                inter[i][j] = -1;
                inter[j][i] = -1;
                // printf("Circle #%d intersects with Circle #%d", i + 1, j +
                // 1);
            }
        }
    for (int i = 0; i < CIR_n; i++) {
        printf("Circle #%d intersects: ", i + 1);
        for (int j = 0; j < CIR_n; j++)
            if (inter[i][j] == -1)
                printf("Circle #%d", j + 1);
        printf("\n");
    }
}