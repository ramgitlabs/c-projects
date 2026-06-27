#include <stdio.h>

int main()
{
    int i = 10;
    char c = 'a';

    void *ptr;
    
    ptr = &i;
    printf("%d\n", *((int*)ptr));//here (int*) is called type cast

    ptr = &c;
    printf("%c\n", *((char*)ptr));
}
