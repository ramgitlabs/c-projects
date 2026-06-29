#include <stdio.h>
//void foo(int *a, int len)
void foo(int a[], int *b, int len)
{
   printf("%d %d", a[0], b[1]);
}

void foom(int a[][3], int (*b)[3]) // b is a pointer to an array of 3 ints
{
   printf("%d %d", a[1][0], b[1][0]);
}

int main()
{
   int a[3] = {1, 2, 3};
   foo(a, a, 3);
   int *b = a; // now b also points to &a, &a[0], a + 0

   int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
   foom(m, m);
   
}
