#include <stdio.h>
void swap(int n, int m);
void swapusingpointers(int *pn, int *pm);


int main()
{
    int n1, n2;
    n1 = 1;
    n2 = 2;
    swap(n1, n2);
    printf("in main: %d  %d\n", n1, n2);



    int n3, n4;
    n3 = 1;
    n4 = 2;
    swapusingpointers(&n3, &n4);
    printf("in main: %d  %d\n", n3, n4);
  

    return 0;
}

void swap(int n, int m)
{
    int temp;
    temp = n;
    n = m;
    m = temp;
    printf("in swap func: %d  %d\n", n, m);
}

void swapusingpointers(int *pn, int *pm)
{
    int temp;
    temp = *pn;
    *pn = *pm;
    *pm = temp;
    printf("in swapusingpointer func: %d  %d\n", *pn, *pm);
}



