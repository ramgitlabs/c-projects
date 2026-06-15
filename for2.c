#include <stdio.h>

int main()
{
    int i, n, p;
    printf("enter two numbers: ");
    scanf("%d %d", &n, &p);
    for(i = -n;i <= n;i = i + p)
    {
        printf("%d ", i);
    }
    return 0;
}
