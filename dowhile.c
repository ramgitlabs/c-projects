#include <stdio.h>

int main()
{
    int n, p, lastp;
    p = 1;
    printf("enter the number for which you want multiplication table: ");
    scanf("%d", &n);
    printf("enter the number until which you want multiplication table: ");
    scanf("%d", &lastp);
    do
    {
        //product = n * p;
        printf("%d * %d = %d\n", n, p, n * p);
        p++;
    }
    while(p <= lastp);
    return 0;
}