#include <stdio.h>
#define x 3
#define y 3
void buildmatrix(int mat[][y], int rows, int columns);
void printmatrix(int mat[][y], int rows, int columns);
void multimatrix(int mat1[][y], int mat2[][y], int rows, int columns);

int main()
{
    int a[x][y];
    int b[x][y];
    buildmatrix(a, x, y);
    printmatrix(a, x, y);

    buildmatrix(b, x, y);
    printmatrix(b, x, y);

    multimatrix(a, b, x, y);
}

void buildmatrix(int mat[][y], int rows, int columns)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("enter mat[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void printmatrix(int mat[][y], int rows, int columns)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void multimatrix(int mat1[][y], int mat2[][y], int rows, int columns)
{
    int i, j, k, sum;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            sum = 0;
            for (k = 0; k < 3; k++)
            {
                sum += mat1[i][k] * mat2[k][j];
            }
            printf("%d ", sum);
        }
        printf("\n");
    }
}