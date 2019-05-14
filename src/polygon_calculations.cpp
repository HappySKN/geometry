#include <math.h>
#include <stdio.h>

void polygon_calculations(int** POL_x, int** POL_y, int* POL_v, int POL_n)
{
    int x[POL_n * 20], y[POL_n * 20];
    double S, P, t[20], l[20], r[20], Sl, Sr;
    for (int i = 0; i < POL_n; i++) {
        P = 0;
        S = 0;
        Sl = 0;
        Sr = 0;
        for (int j = 0; j < POL_v[i] - 1; j++) {
            x[j] = POL_x[i][j + 1] - POL_x[i][j];
            if (j + 2 == POL_v[i])
                x[j + 1] = POL_x[i][0] - POL_x[i][j + 1];
            y[j] = POL_y[i][j + 1] - POL_y[i][j];
            if (j + 2 == POL_v[i])
                y[j + 1] = POL_y[i][0] - POL_y[i][j + 1];
        }
        for (int j = 0; j < POL_v[i]; j++) {
            t[j] = sqrt(x[j] * x[j] + y[j] * y[j]);
            P += t[j];
        }
        printf("\nPerimeter of polygon #%d = %.2f\n", i + 1, P);

        for (int j = 0; j < POL_v[i] - 1; j++) {
            l[j] = POL_x[i][j] * POL_y[i][j + 1];
            r[j] = POL_x[i][j + 1] * POL_y[i][j];
            if (j + 2 == POL_v[i]) {
                Sl += POL_x[i][POL_v[i] - 1] * POL_y[i][0];
                Sr += POL_x[i][0] * POL_y[i][POL_v[i] - 1];
            }
            if (l[j] < 0)
                l[j] *= -1;
            if (r[j] < 0)
                r[j] *= -1;
            Sl += l[j];
            Sr += r[j];
        }
        S = (Sl - Sr) / 2;
        printf("Area of polygon #%d = %.2f\n", i + 1, S);
    }
}