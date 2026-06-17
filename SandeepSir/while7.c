#include <stdio.h>

int main()
{
    int n, p, lastp;
    p = 1;
    printf("enter the number for which you want multiplication table: ");
    scanf("%d", &n);
    printf("enter the number until which you want multiplication table: ");
    scanf("%d", &lastp);
    while(p <= lastp)
    {
        //product = n * p;
        printf("%d * %d = %d\n", n, p, n * p);
        p++;
    }
    return 0;
}
