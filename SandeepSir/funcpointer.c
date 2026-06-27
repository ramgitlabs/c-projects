#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}
int main()
{
    int (*op)(int, int);

    int input;
    printf("Enter the oparation(add = 0 |||| sub = 1) : ");
    scanf("%d", &input);

    printf("%p %p\n", sub, &sub);

    if(input) // 0 is false
        op = sub;
    else
        op = add;

    int res = op(12, 5);
    printf("Result = %d", res);

}
