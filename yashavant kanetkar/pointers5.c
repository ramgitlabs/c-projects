#include <stdio.h>
#define x 5

void conversionstograms(float ar[], int len)
{
    float temp[x] = {0};
    int i;
    for(i = 0; i < len; i++)
    {
        temp[i] = ar[i] * 1000;
        printf("weight in grams of temp[%d] = %fg\n", i, temp[i]);
    }
}

void conversionstopounds(float ar[], int len)
{
    float temp[x] = {0};
    int i;
    for(i = 0; i < len; i++)
    {
        temp[i] = ar[i] * 2.20462;
        printf("weight in pound of temp[%d] = %flb\n", i, temp[i]);
    }
}    

void conversionstometrictons(float ar[], int len)
{
    int i;
    float temp[x] = {0};
    for(i = 0; i < len; i++)
    {
        temp[i] = ar[i] * 0.001;
        printf("weight in metric tons of temp[%d] = %ft\n", i, temp[i]);
    }
}
int main()
{
    float ar[x];
    int i;
    for(i = 0; i < x; i++)
    {
        printf("Enter the weight of ar[%d] in kilogram: ", i);
        scanf("%f", &ar[i]);
    }
    conversionstograms(ar, x);
    conversionstopounds(ar, x);
    conversionstometrictons(ar, x);
    return 0;
}
