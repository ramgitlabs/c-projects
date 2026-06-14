#include <stdio.h>

int main()
{
    int factorial, n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    factorial = n;
    while(n>1)
    {
        factorial *= n-1;
        n--;
    }
    printf("factoraial value = %d", factorial);
    return 0;
}
