#include <stdio.h>

int main()
{  
    float f = 3.14;
    float *a = &f;
    float **b = &a;
    printf("%p %p %p\n", &f, &a, &b);
    printf("%p %p\n", a, b);
    printf("%f %f %f\n", f, *a, **b);
    return 0;
}
