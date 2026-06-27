#include <stdio.h>
#include <math.h>

void distfunc(float x1, float y1, float x2, float y2)
{
    float var = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    float distance = sqrt(var);
    printf("distance = %f\n", distance);
}

float aroftri(float x1, float y1, float x2, float y2, float x3, float y3)
{
    float temp = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
    if (temp < 0)
        temp = -1 * temp;
    float area = 0.5 * temp;
    return area;
}

int main()
{
    float p, q, r, s;
    printf("Enter the (x-y) coordinates of the first point for distance formula: ");
    scanf("%f %f", &p, &q);
    printf("Enter the (x-y) coordinates of the second point for distance formula: ");
    scanf("%f %f", &r, &s);

    float a, b, c, d, e, f;
    printf("Enter the (x-y) coordinates of the first point for triangle area: ");
    scanf("%f %f", &a, &b);
    printf("Enter the (x-y) coordinates of the second point for triangle area: ");
    scanf("%f %f", &c, &d);
    printf("Enter the (x-y) coordinates of the third point for triangle area: ");
    scanf("%f %f", &e, &f);

    float x, y;
    printf("Enter the (x-y) coordinates for a point P: ");
    scanf("%f %f", &x, &y);

    distfunc(p, q, r, s);

    float areaofABC = aroftri(a, b, c, d, e, f);
    printf("areaofABC = %f\n", areaofABC);

    float areaofABP = aroftri(a, b, c, d, x, y);
    printf("areaofABP = %f\n", areaofABP);
    float areaofAPC = aroftri(a, b, x, y, e, f);
    printf("areaofAPC = %f\n", areaofAPC);
    float areaofPBC = aroftri(x, y, c, d, e, f);
    printf("areaofPBC = %f\n", areaofPBC);

    if (areaofABC == areaofABP + areaofAPC + areaofPBC)
        printf("point P(%f,%f) lies inside or on the triangle ABC.\n", x, y);
    else
        printf("point P(%f,%f) lies ouside the triangle ABC.\n", x, y);
    return 0;
}
