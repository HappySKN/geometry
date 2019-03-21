#include "circle.h"
#include <stdio.h>

void circle_calculations(int* CIR_r, int CIR_n)
{
    double Pi = 3.1415926535, P, S;
    for (int i = 0; i < CIR_n; i++) {
        P = 2 * Pi * CIR_r[i];
        S = Pi * CIR_r[i] * CIR_r[i];
        printf("\nCircle perimeter %d = %.3f\n", i + 1, P);
        printf("Circle area %d = %.3f\n", i + 1, S);
    }
}