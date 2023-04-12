#include<stdio.h>

int y = 1 ;
int main()
{
    long long z = 3;
    int x  = 4;
    printf("The size of x is: %li\n", sizeof(x));
    printf("The size of x is: %li\n", sizeof(z));
    printf("x is stored at %p\n", &x);
    printf("z is stored at %p\n", &z);
    printf("y is stored at %p\n", &y);
    return 0;

}
