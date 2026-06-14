#include <stdio.h>

int main()
{
    int a = 1;
    int i;
    printf("enter how many times you want to print hello world: ");
    scanf("%d", &i);
    while(a <= i)
    {
        printf("\n%d. hello world!!", a);
        a++;
    }
    return 0;
}
