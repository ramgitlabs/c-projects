#include <stdio.h>

int main ()
{
    int i, n, c = 0;

    printf("How many numbers you want to print: ");
    scanf("%d", &n);

    for(i = 1;c < n;i = i * 2) 
    {
        printf("%d, ", i);
        c++;
        
    }  

    return 0;
}
