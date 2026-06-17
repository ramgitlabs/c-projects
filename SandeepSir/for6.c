#include <stdio.h>

int main()
{
    int i, j, k, c;
    c = 1;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= (5 - i); j++)
        {
            printf("   ");
        }
        for (k = j; k <= 5; k++)
        {
            printf("%d  ", c % 10);
            c++;
        }
        printf("\n");
    }
    return 0;
}
