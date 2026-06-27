#include <stdio.h>

// int main()
// {
//     int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

//     // ptr is a pointer to an array of 3 ints {1, 2, 3}, {1, 2, 3}, {1, 2, 3}, {1, 2, 3}
//     int (*ptr)[3]; // each 3 elements in a set ni choose ptr
//     ptr = a;
//     printf("%d", ptr[0][2], *(*(ptr + 0) + 2));
//     return 0;
// }

#include <stdio.h>

int main()
{
    int x1 = 20, x2 = 30, x3 = 10;
    int *y1 = &x1; // y points to integer variable
    int *y2 = &x2;
    int *y3 = &x3;

    int *a[3] = {y1, y2, y3}; //int *i = &j;
    //**(a + 0) = 10
    //int (*ptr)[3]; //each 3 elements in a set ni choose ptr
    //ptr is a pointer to an array of 3 ints {1, 2, 3}, {1, 2, 3}, {1, 2, 3}, {1, 2, 3}
    
    int *(*ptr)[3]; //each 3 elements in a set ni choose ptr
    // ptr[0] = a[0];
    ptr = &a; //???????????

    
    // int *(*ptr)[3] = &a;      //int **g = &i;

    // printf("&a = %p \n", &a);
    // printf("a = %p \n", a);

    // printf("&a + 1= %p \n", &a + 1);
    // printf("a + 1 = %p \n", a + 1);

    // printf("%p \n", *(a + 0));
    // printf("%p \n", y1);
    // printf("%d \n", *y1);
    // printf("%d \n", **(a + 0));
    return 0;
}
