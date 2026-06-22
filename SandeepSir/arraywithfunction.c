#include <stdio.h>
void printarray(int ar2[], int len);
void increment(int ar2[], int len);
void buildarray(int ar[], int len);
int main()
{
    // int ar1[] = {1, 2, 3, 4, 5};
    // printarray(ar1, 5);
    int ar2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printarray(ar2, 10);
    increment(ar2, 10);
    int i;
    printf("ar2 : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", ar2[i]);
    }
    printf("\n");
    int ar3[7];
    buildarray(ar3, 7);
    for (i = 0; i < 7; i++)
    {
        printf("%d ", ar3[i]);
    }
}

void printarray(int ar2[], int len)
{
    int i;
    printf("ar2 : ");
    for (i = 0; i < len; i++)
    {
        printf("%d ", ar2[i]);
    }
    printf("\n");
}

void increment(int ar2[], int len)
{
    int i;
    printf("ar2 : ");
    for (i = 0; i < len; i++)
    {
        ar2[i]++;
        printf("%d ", ar2[i]);
    }
    printf("\n");
}

void buildarray(int ar3[], int len)
{
    printf("now enter the values for array of length %d: \n", len);
    int i;
    for (i = 0; i < len; i++)
    {
        printf("Enter ar3[%d]: ", i);
        scanf("%d", &ar3[i]);
    }
}
