#include <stdio.h>
int main()
{
    int a, i;
    int ar[5] = {10, 20, 30 ,40, 50};
    //ar[4] = 50;
    // for (i = 0; i < 5; i++)
    // {
    //     printf("enter ar[%d] = ", i);
    //     scanf("%d", &ar[i]);
    // }
    // for (i = 0; i < 5; i++)
    // {
    //     printf("ar + %d = %p\n", i, ar + i);
    //     printf("ar[%d] = %d\n", i, ar[i]);
    // }
    printf("ar = %p\n", ar);
    printf("&ar = %p\n", &ar);

    printf("*(ar + 0) === *ar = %d\n", *(ar + 0));

    printf("sizeof ar is %d \n", sizeof(ar));
    printf("sizeof &ar is %d \n", sizeof(&ar));

    printf("ar + 1 is %p \n", ar + 1);
    printf("&ar + 1 is %p \n", &ar + 1);
    return 0;
}
