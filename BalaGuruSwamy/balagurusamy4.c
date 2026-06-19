#include <stdio.h>
int main()
{
    char ch;
    printf("enter ch: ");
    scanf("%c", &ch);
    int i, j, n;
    printf("enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}