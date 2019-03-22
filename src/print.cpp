#include "circle.h"
#include "triangle.h"
#include <graphics.h>

void print_circle(int* CIR_x, int* CIR_y, int* CIR_r, int CIR_n)
{
    int gd = 9, gm = 3;
    initgraph(&gd, &gm, NULL);
    for (int i = 0; i < CIR_n; i++) {
        circle(CIR_x[i], CIR_y[i], CIR_r[i]);
        floodfill(CIR_x[i], CIR_y[i], WHITE);
    }
}

void print_triangle(int* TR_x, int* TR_y, int TR_n)
{
    for (int i = 0; i < TR_n * 3; i += 3) {
        line(TR_x[i], TR_y[i], TR_x[i + 1], TR_y[i + 1]);
        line(TR_x[i + 1], TR_y[i + 1], TR_x[i + 2], TR_y[i + 2]);
        line(TR_x[i + 2], TR_y[i + 2], TR_x[i], TR_y[i]);
    }
    int in = 0;

    while (in == 0) {
        in = getchar();
    }
}