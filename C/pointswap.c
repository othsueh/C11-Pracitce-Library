#include<stdio.h>
#include<stdint.h>


void pointswap(double *, double *);
int main()
{
    double a = 3278.23;
    double b = 234.34;
    printf("Before swap: a = %lf, b = %lf",a,b);
    pointswap(&a,&b);
    printf("After swap: a = %lf, b = %lf",a,b);
    return 0;
}
void pointswap(double *a, double *b)
{
    double a1 = *a;
    *a = *b;
    *b = a1;
}