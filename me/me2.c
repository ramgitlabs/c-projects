#include <stdio.h>

#define y 3
#define x 3

void buildmatrix(int mat[][y], int rows, int columns);
int sumfunc(int mat[][y], int rows, int columns);

int main()
{
    int a = 10;
    int *b = &a;
    
    int m1[3][3];
    buildmatrix(m1, x, y);
    int sum = sumfunc(m1, x, y);
    printf("The sum of all the elements in the given matrix is %d", sum);
}
void buildmatrix(int mat[][y], int rows, int columns)
{
    int i, j;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            printf("Enter mat[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

int sumfunc(int mat[3][3], int rows, int columns)
{
    int i, j, sum = 0;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            sum += mat[i][j];
        }
    }
    return sum;
}