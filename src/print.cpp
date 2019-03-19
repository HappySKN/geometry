#include "circle.h"
#include <graphics.h>

void print(int* CIR_x, int* CIR_y, int* CIR_r, int CIR_n)
{
    int gd = 9, gm = 3;
    initgraph(&gd, &gm, NULL);
    for (int i = 0; i < CIR_n; i++) {
        circle(CIR_x[i], CIR_y[i], CIR_r[i]);
    }
    getch();
}