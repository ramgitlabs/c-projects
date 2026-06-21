#include <stdio.h>

int main()
{
    float ar[10];
    int i;
    float sum = 0;
    for(i = 0;i < 10;i++)
    {
        printf("Enter the value of ar[%d] = ", i);
        scanf("%f", &ar[i]);
    }
    for(i = 0;i < 10;i++)
    {
        sum += ar[i]*ar[i];
    }
    printf("summation = %f", sum);
    return 0;
}
