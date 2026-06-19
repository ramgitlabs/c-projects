#include <stdio.h>

int main()
{
    char ch;
    int i, j, n;
    printf("enter ch: ");
    scanf("%c", &ch);
    printf("enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i > 1 && i < 5 && j > 1 && j < 5)
            {
                printf("* ");
            }
            else
                printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}
