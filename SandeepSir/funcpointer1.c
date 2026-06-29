#include <stdio.h>
int i;
double d;
void* add_int(void *px,void *py)//px lopala &m1 undi and py lopala &m2 undi
{
    i = *(int*)px + *(int*)py;
    return &i;
}
void* add_double(void *px,void *py)//px lopala &n1 undi and py lopala &n2 undi
{
    d = *(double*)px + *(double*)py;
    return &d;
}

int main()
{
    void* (*op)(void*,void*);
    op = &add_double;
    double n1 = 2.5, n2 = 2.5;
    double *pn = (double*)op(&n1, &n2);//pn lopala &d undi
    printf("%f\n", *pn);


    op = &add_int;
    int m1 = 10, m2 = 6;
    int *pm = (int*)op(&m1, &m2);
    printf("%d\n", *pm);
    return 0;
}
