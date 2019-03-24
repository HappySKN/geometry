#include "triangle.h"
#include <math.h>
#include <stdio.h>

void triangle_calculations(int* TR_x, int* TR_y, int TR_n)
{
    int x[TR_n * 3], y[TR_n * 3], k = 0;
    double a, b, c, S, P;
    for (int i = 0; i < TR_n * 3; i += 3) {
        x[i] = TR_x[i + 1] - TR_x[i];
        y[i] = TR_y[i + 1] - TR_y[i];
        x[i + 1] = TR_x[i + 1] - TR_x[i + 2];
        y[i + 1] = TR_y[i + 2] - TR_y[i + 1];
        x[i + 2] = TR_x[i] - TR_x[i + 2];
        y[i + 2] = TR_y[i + 2] - TR_y[i];
        a = sqrt(x[i] * x[i] + y[i] * y[i]);
        b = sqrt(x[i + 1] * x[i + 1] + y[i + 1] * y[+1]);
        c = sqrt(x[i + 2] * x[i + 2] + y[i + 2] * y[i + 2]);
        P = a + b + c;
        S = sqrt(P / 2 * (P / 2 - a) * (P / 2 - b) * (P / 2 - c));
        k += 1;
        printf("\nPerimeter of triangle #%d = %.2f", k, P);
        printf("\nArea of triangle #%d = %.2f\n", k, S);
    }
}