#include "circle.h"
#include "triangle.h"
#include <stdio.h>

int main()
{
    int *CIR_x, *CIR_y, *CIR_r, CIR_n;
    int *TR_x, *TR_y, TR_n;
    printf("Enter quanity of triangles: ");
    scanf("%d", &TR_n);
    TR_x = new int[TR_n * 3];
    TR_y = new int[TR_n * 3];
    triangle(TR_x, TR_y, TR_n);
    triangle_calculations(TR_x, TR_y, TR_n);
    printf("\nEnter quanity of circles: ");
    scanf("%d", &CIR_n);
    CIR_x = new int[CIR_n];
    CIR_y = new int[CIR_n];
    CIR_r = new int[CIR_n];
    circle(CIR_x, CIR_y, CIR_r, CIR_n);
    circle_calculations(CIR_r, CIR_n);
    print_circle(CIR_x, CIR_y, CIR_r, CIR_n);
    print_triangle(TR_x, TR_y, TR_n);
    delete[] CIR_x;
    delete[] CIR_y;
    delete[] CIR_r;
}