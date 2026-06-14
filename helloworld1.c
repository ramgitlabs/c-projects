#include <stdio.h>

int main()
{
    int current = 1;
    int base, power, product;
    printf("Enter the values for base and power coorespondingly: ");
    scanf("%d %d", &base, &power);
    product = base;
    while (current < power)
    {
        product *= base;
        current++;
    }
    printf("%d power %d is %d", base, power, product);
    return 0;
}
