#include <stdio.h>

int main()
{
    int i, j, p, k;
    p = 0;
    printf("enter how many horizontal lines of numbers you want: ");
    scanf("%d", &k);
    for(i = 1;i <= k;i++)
    {
        for(j = 1;j <= i;j++, p++)
        {
            printf("%d ", p % 10);
        }
        printf("\n");
    }
    return 0;
}
