#include <stdio.h>

int main()
{
    int i, j, k, n, temp;
    i = 0;
    j = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("1 ");
    for (k = 1; k < n; k++)
    {
        printf("%d ", i + j);
        temp = i;
        i = j;
        j = temp + j;
    }
}
