#include "circle.h"
#include <stdio.h>

int main()
{
    int *CIR_x, *CIR_y, *CIR_r, CIR_n;
    printf("Enter quanity of circles: ");
    scanf("%d", &CIR_n);
    CIR_x = new int[CIR_n];
    CIR_y = new int[CIR_n];
    CIR_r = new int[CIR_n];
    circle(CIR_x, CIR_y, CIR_r, CIR_n);
    // printf("%d", CIR_x[1]);
    print(CIR_x, CIR_y, CIR_r, CIR_n);
    delete[] CIR_x;
    delete[] CIR_y;
    delete[] CIR_r;
}