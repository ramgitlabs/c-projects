#include <stdio.h>

void swap(int *a, int *b, int *c)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main()
{
    int x = 5, y = 8, z = 10;
    printf("%d %d %d\n", x, y, z);
    swap(&x, &y, &z);
    printf("%d %d %d\n", x, y, z);
    return 0;
}
