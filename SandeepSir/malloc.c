#include <stdio.h>
#include <stdlib.h>
//sum of n numbers dynamic memory allocation.
int main()
{
    int i, sum = 0, len;
    printf("Enter the count of numbers for which you want sum of: ");
    scanf("%d", &len);
    int *ptr;
    ptr = (int*)malloc(sizeof(int)*len);
    for(i = 0; i < len; i++)
    {
        printf("Enter a number: ");
        scanf("%d", ptr + i); // because ptr is an address which is in heap memory
    }
    for(i = 0; i < len; i++)
    {
        sum += ptr[i];
    }
    printf("sum of all %d numbers is %d", len, sum);
}
