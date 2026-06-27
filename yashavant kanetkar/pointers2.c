#include <stdio.h>

int factorial(int n)
{
    if (n == 1) return 1;
    return n * factorial(n - 1);
}

void power_fact(float *a, int *b, int fact)
{
    int i;
    float product = 1;
    for(i = 0; i < *b; i++)
    {
        product *= *a;
    }
    printf("%f power %d = %f\n", *a, *b, product);
    int factvalue = factorial(fact);
    printf("%d! = %d\n", fact, factvalue);
}
int main()
{
    float a;
    int b;
    int fact;
    printf("Enter the values for a, b(for a^b) and for factorial: ");
    scanf("%f %d %d", &a, &b, &fact);
    power_fact(&a, &b, fact);
    return 0;
}
