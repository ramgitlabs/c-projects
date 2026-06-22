#include <stdio.h>
#define X 3                       // rows
#define Y 3                       //coloums 
int buildmatrix(int a[][Y], int rows, int coloums);
int printmatrix(int a[][Y], int rows, int coloums);
int main()
{
    int a[X][Y];                         //declaration of 2D array
    buildmatrix(a, X, Y);                //calling scanmatrix named function
    printmatrix(a, X, Y);                //calling printmatrix named function
    int b[X][Y];
    buildmatrix(b, X, Y);
    printmatrix(b, X, Y);
    int c[X][Y];
    int i, j;
    for(i = 0; i < X; i++)
    {
        for(j = 0; j < Y; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printmatrix(c, X, Y);
}

int buildmatrix(int a[][Y], int rows, int coloums)
{
    int i, j;
    for(i = 0; i < rows;i++)//loop to generate the 2D array
    {
        for(j = 0; j < coloums; j++)
        {
            printf("Enter the value of a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            printf("\n");
        }
    }
}

int printmatrix(int a[][Y], int rows, int coloums)
{
    int i, j;
    for(i = 0;i < rows; i++)//for loop to print the matrix
    {
        for(j = 0; j < coloums; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
