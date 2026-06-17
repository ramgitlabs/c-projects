#include <stdio.h>

int main ()
{   
    int i = 1;
    int base, power, product;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the power: ");
    scanf("%d", &power);
    product = base;
    while(i < power)//here it should be < and not <= because power is becoming +1
    {
        product *= base;
        i++;
    }
    printf("product = %d", product);
    return 0;
}
