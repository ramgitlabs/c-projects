#include <stdio.h>

int main()
{
    int i, j, k, n, l;
    k = 1;
    l = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                if (j % 2 != 0)
                {
                    printf("%d ", l);
                }
                else
                {
                    printf("%d ", k);
                }
            }
            else
            {
                if (j % 2 != 0)
                {
                    printf("%d ", k);
                }
                else
                {
                    printf("%d ", l);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
