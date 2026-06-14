#include <stdio.h>

int main()
{
    int i = 1;
    int sum, n;
    sum = 0;
    printf("enter the value of n(as in sum of first n natural numbers): ");
    scanf("%d", &n);
    while(i <= n)
    {
        sum += i;
        i++;
    } 
    printf("sum = %d", sum);
    return 0;
}
