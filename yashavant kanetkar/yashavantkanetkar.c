#include <stdio.h>

int main()
{
    int i, n;
    int num[10];
    printf("Enter the value of n(n < 10): ");
    scanf("%d", &n);
    if (n >= 10)
    {
        printf("INVALID VALUE OF 'n'. ");
    }
    for(i = 0;i < n;i++)
    {
        printf("Enter the numbers you want to interchange: ");
        scanf("%d", &num[i]); 
        //scanf("%d", num + i); //a  first house in a street
    }
    printf("#######################\n");
    printf("num      = %p\n", (void *)num);
    printf("&num     = %p\n", (void *)&num);
    
    for(i = 0;i < n;i++)
    {
        printf("&num[%d]  = %p\n", i, (void *)&num[i]);
    }
    for(i = 0;i < n;i++)
    {
        printf("%d %d ", num[i], *(num + i));
    }
    
    printf("%p", &num + 1);

    return 0;
}
