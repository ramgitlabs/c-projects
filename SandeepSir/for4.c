#include <stdio.h>

int main()
{
    int  temp, factorial, number, i;
    number = 1;
    factorial = 1;
    printf("Enter the number for which you want factorial: ");
    scanf("%d", &number);
    temp = number;
    for(i = 1;i <= number;i++,temp--)
    {
        factorial = factorial*(temp);
    }
    printf("value of factorial is %d", factorial);
    return 0;
}
