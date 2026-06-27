#include <stdio.h>
#include <math.h>
#define x 5

void stats(float ar[], int len)
{
    float sum = 0.0;
    int i;
    float sum1 = 0;
    for(i = 0; i < len; i++)
    {
        sum = sum + ar[i];
    }
    printf("Sum = %f\n", sum);
    printf("average = %f\n", sum / x);
    for(i = 0; i < x; i++)
    {
        ar[i] -= (sum / x);
    }
    for(i = 0; i < x; i++)
    {
        ar[i] *= ar[i];
    }
    for(i = 0; i < x; i ++)
    {
        sum1 += ar[i];
    }
    float var = sum1 / x;
    printf("variance = %f\n", var);
    float sd = sqrt(var);
    printf("standard deviation = %f\n", sd);
}
int main()
{
    float a[x];
    int i;
    for(i = 0; i < x; i++)
    {
        printf("Enter the value of ar[%d] = ", i);
        scanf("%f", &a[i]);
    }
    stats(a, x);
}


