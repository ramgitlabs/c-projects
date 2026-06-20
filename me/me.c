#include <stdio.h>
int main()
{
    int a, i;
    int ar[4];
    ar[4] = 50;
    for(i = 0;i < 5;i++)
    {
     printf("enter ar[%d] = ", i);
     scanf("%d", &ar[i]);
    }
    for(i = 0;i < 5;i++)
    {
    printf("ar + %d = %p\n", i, ar + i);
    printf("ar[%d] = %d\n", i, ar[i]);
    }
    return 0;
}
