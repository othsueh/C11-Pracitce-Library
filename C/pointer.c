#include <stdio.h>

int main()
{
    int a = 0;
    int *point;
    point = &a;
    printf("%d", a);
    printf("%p", point);
}