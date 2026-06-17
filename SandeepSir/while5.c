#include <stdio.h>

int main()
{
    int a, sum;
    printf("Enter the number: ");
    scanf("%d", &a);
    sum = 0;
    while(a/10 >= 0)
    {
        sum += a % 10;
        if(a == 0) break;
        a = a / 10;
    }
    printf("The sum of all the digits in the given number is %d", sum);
    return 0;
}
