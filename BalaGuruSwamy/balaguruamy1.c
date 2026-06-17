#include <stdio.h>

int main()
{
    float p, r, n, v, product, i;
    product = 1;
    printf("enter the values for p, r, n: ");
    scanf("%f %f %f", &p, &r, &n);
    for (i = 1; i <= n; i++)
    {
        product *= (1 + r);
    }
    v = p * product;
    printf("%f", v);
    return 0;
}
