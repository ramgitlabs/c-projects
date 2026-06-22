#include <stdio.h>
#include <limits.h>
int smallestnum(int ar[], int len);
#define x 5
void buildarray(int ar[], int len);
int main()
{
    int ar[x];
    buildarray(ar, x);
    int small = smallestnum(ar, x);
    printf("Among the numbers you have entered %d is the smallest.\n", small);
}

void buildarray(int ar[], int len)
{
    int i, j;
    for(i = 0; i < x; i++)
    {
        printf("Enter ar[%d]: ", i);
        scanf("%d", &ar[i]);
        printf("\n");
    }
}

int smallestnum(int ar[], int len)
{
    int i, j;
    int smallest = INT_MAX;
    for(i = 0;i < len; i++)
    {
        if (ar[i] < smallest) smallest = ar[i];
    }
    return smallest;
}