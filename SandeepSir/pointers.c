#include <stdio.h>
#define x 5

int main()
{
    int i;
    int ar[x];
    printf("Enter any %d numbers: ", x);
    for(i = 0; i < x; i++)
    {
        scanf("%d", (ar + i));
    }
    int *ptr;
    ptr = ar;
    for(i = 0; i < x; i++)
    {
        printf("%d ", *(ptr + i));
    }
    return 0;
}
