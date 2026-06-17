#include <stdio.h>

int main()
{
    int a, b, i, sum;
    printf("Enter any two numbers: ");
    scanf("%d %d", &a, &b);
    i = 1;
    sum = 0;
    while(i <= b)
    {
        sum += a;
        i++;
    }
    printf("%d * %d = %d", a, b, sum);
    return 0;
}
