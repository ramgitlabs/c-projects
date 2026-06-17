#include <stdio.h>

int main ()
{
    int a;
    printf("enter a number:");
    scanf("%d", &a);
    while(a/10 >= 0)
    {
        if (a == 0) {break;}
        printf("%d", a%10);
        a = a / 10;
    }
    return 0;
}
