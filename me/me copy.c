#include <stdio.h>
int main()
{
    int a, i;
    int x[3] = {10, 20, 30};
    int y[3] = {40, 50, 60};
    int z[3] = {70, 80, 90};
    int* ar[3] = { x, y, z};
    
    printf("ar = %p\n", ar);
    printf("&ar = %p\n", &ar);

    //printf("*(ar + 0) === *ar = %d\n", *(ar + 0));

    printf("sizeof ar is %d \n", sizeof(ar));
    printf("sizeof &ar is %d \n", sizeof(&ar));

    printf("ar + 1 is %p \n", ar + 1);
    printf("&ar + 1 is %p \n", &ar + 1);

    printf("++++++++  %d ", *(*(ar + 1) + 1));

    printf("x is %p \n", x);
    printf("&x is %p \n", &x);
    printf("ar is %p \n", ar);
    printf("&ar is %p \n", &ar);
    return 0;
}
