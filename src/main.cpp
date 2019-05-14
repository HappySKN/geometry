#include "circle.h"
#include "polygon.h"
#include "triangle.h"
#include <stdio.h>

int main()
{
    int *CIR_x, *CIR_y, *CIR_r, CIR_n;
    int *TR_x, *TR_y, TR_n;
    int **POL_x, **POL_y, POL_n, *POL_v;

    printf("Enter quanity of polygons: ");
    scanf("%d", &POL_n);
    printf("\n");
    POL_v = new int[POL_n * 20];
    POL_x = new int*[POL_n * 20];
    POL_y = new int*[POL_n * 20];
    for (int i = 0; i < POL_n; i++) {
        printf("Enter quanity of vertices for polygon #%d: ", i + 1);
        scanf("%d", &POL_v[i]);
        POL_x[i] = new int[POL_v[i]];
        POL_y[i] = new int[POL_v[i]];
    }
    polygon(POL_x, POL_y, POL_v, POL_n);
    polygon_calculations(POL_x, POL_y, POL_v, POL_n);

    printf("\nEnter quanity of triangles: ");
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
    intersect(CIR_x, CIR_y, CIR_r, CIR_n);

    print_polygon(POL_x, POL_y, POL_v, POL_n);
    print_circle(CIR_x, CIR_y, CIR_r, CIR_n);
    print_triangle(TR_x, TR_y, TR_n);
    delete[] CIR_x;
    delete[] CIR_y;
    delete[] CIR_r;
    delete[] TR_x;
    delete[] TR_y;
    // return 0;
}