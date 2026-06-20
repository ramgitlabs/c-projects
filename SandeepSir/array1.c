#include <stdio.h>

int main()
{
    int ar[10];
    int count, i, even = 0, odd = 0, positive = 0, negative = 0, NONE = 0;
    printf("Enter the count of numbers(must be less than 10): ");
    scanf("%d", &count);
    for(i = 0;i < count;i++)
    {
        printf("Enter the value for ar[%d]: ", i);
        scanf("%d", &ar[i]);
    }
    for(i = 0;i < count;i++)
    {
        if (ar[i] % 2 == 0) if(ar[i] != 0) even++;
        if (ar[i] % 2 != 0) if(ar[i] != 0) odd++;
        if (ar[i] > 0) positive++;
        if (ar[i] < 0) negative++;
        if (ar[i] == 0) NONE++;
    }
    printf("%d even number(s).\n", even);
    printf("%d odd number(s).\n", odd);
    printf("%d positive number(s).\n", positive);
    printf("%d negative number(s).\n", negative);
    printf("%d NONE number(s).\n", NONE);
    return 0;
}
