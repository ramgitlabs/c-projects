#include <stdio.h>
int main()
{
    char ch, ch1;
    int i, j, n;
    printf("enter ch: ");
    scanf("%c", &ch);
    scanf("%c", &ch1);
    printf("enter ch1: ");
    scanf("%c", &ch1);
    printf("enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 3 && j == 3)
            {
                printf("%c ", ch1);
            }
            else
            {
                printf("%c ", ch);
            }
        }
        printf("\n");
    }
}
