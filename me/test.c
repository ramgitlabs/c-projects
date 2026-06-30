#include <stdio.h>
//void foo(int *a, int len)

struct Complex
{
    float real; 
    float imag;
};

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
   //foo(a, a, 3);
   int *b = a; // now b also points to &a, &a[0], a + 0

   int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
   //foom(m, m);
   
   char *fruits[] = {
        "Apple",
        "Banana",
        "Mango",
        "Orange"
    };

    int i;

    for(i = 0; i < 4; i++)
    {
        printf("%c %p -- %s %p --  %p %p\n", *(*(fruits + i) + 0), &fruits[i], fruits[i],&fruits[i], &fruits[i][0], &fruits[i][1]);
    }

    float real = 3.5;
    float imag = 2.0;

    printf("%.1f + %.1fi\n", real, imag);

    struct Complex c1[5], c2; //int i
    c1[0].real = real;
    c1[0].imag = imag;

    printf("%.1f + %.1fi\n", c1[0].real, c1[0].imag);

    return 0;
}
