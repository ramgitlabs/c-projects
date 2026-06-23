#include <stdio.h>
#define x 3
#define y 3
void buildmatrix(int mat[][y], int rows, int columns);
void printmatrix(int mat[][y], int rows, int columns);
void submatrix(int mat1[][y], int mat2[][y], int mat3[][y], int rows, int columns);

int main()
{
    int a[x][y];
    int b[x][y];
    int c[x][y];

    buildmatrix(a, x, y);
    printmatrix(a, x, y);

    buildmatrix(b, x, y);
    printmatrix(b, x, y);

    submatrix(a, b, c, x, y);
    printmatrix(c, x, y);
}

void buildmatrix(int mat[][y], int rows, int columns)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("Enter mat[%d][%d] = ", i, j);
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
    printf("\n");
}

void submatrix(int mat1[][y], int mat2[][y], int mat3[][y], int rows, int columns)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            mat3[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}