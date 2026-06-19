#include <stdio.h>

int main()
{
    char ch;
    ch = 97;
    int i, j, n, c, k;
    c = 1;
    printf("enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%c ", ch++);
            }
            else
            {
                printf("%d ", c % 10);
                c++;
            }
        }
        printf("\n");
    }
}
