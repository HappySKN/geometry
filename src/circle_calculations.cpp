#include "circle.h"
#include <stdio.h>

void circle_calculations(int* CIR_r, int CIR_n)
{
    double Pi = 3.1415926535, P, S;
    int k = 0;
    for (int i = 0; i < CIR_n; i++) {
        P = 2 * Pi * CIR_r[i];
        S = Pi * CIR_r[i] * CIR_r[i];
        k += 1;
        printf("\nPerimeter of circle #%d = %.3f\n", k, P);
        printf("Area of circle #%d = %.3f\n", k, S);
    }
    printf("\n");
}