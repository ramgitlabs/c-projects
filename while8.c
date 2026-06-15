#include <stdio.h>

int main()
{
    int sum, current, max;
    sum = 0;
    printf("enter the last digit until which you want to do summation: ");
    scanf("%d", &max);
    for(current = 1;current <= max;current++)
    {
        sum += current;
    }
    printf("%d", sum);
    return 0;
}
