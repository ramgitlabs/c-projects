#include <stdio.h>

int main()
{
    int n, sum;
    sum = 0;
    printf("Enter the number for which you want to find sum of it's digits: ");
    scanf("%d", &n);
    while (n > 0)
    {
       sum += n % 10;
       n = n / 10; 
    }
    printf("The sum of all the digits in the given number is %d.", sum);
    return 0;
}
