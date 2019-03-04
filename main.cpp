#include <graphics.h>
#include <stdio.h>

void cir()
{
    int gd = DETECT, gm, n;
    printf("Enter quanity of circle: ");
    scanf("%d", &n);
    int i, A[n], x[n], y[n], r[n];
    for (i = 0; i < n; i++)
    {
        printf("\nEnter x%d, y%d, r%d: ", i + 1, i + 1, i + 1);
        scanf("%d%d%d", &x[i], &y[i], &r[i]);
    }
    initgraph(&gd, &gm, NULL);
    for (i = 0; i < n; i++)
    {
        circle(x[i], y[i], r[i]);
    }
}

int main()
{
    cir();
    getch();
}
