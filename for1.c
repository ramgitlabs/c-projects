#include <stdio.h>

int main()
{
    int i, c = 0, n;
    printf("enter until how many numbers do you want to print: ");
    scanf("%d", &n);
    for(i = 1;c < n;i = i * 3)
    {
        printf("%d, ", i);
        c++;
    }
    return 0;
}
