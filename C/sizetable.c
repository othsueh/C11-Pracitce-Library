#include<stdio.h>
#include<limits.h>
#include<float.h>

int main()
{
    printf("The max value of int is: %d\n", INT_MAX);
    printf("The min value of int is: %d\n", INT_MIN);
    printf("Int take %ld bytes\n", sizeof(int));
    printf("\n");
    printf("The max value of long int is: %ld\n", LONG_MAX);
    printf("The min value of long int is: %ld\n", LONG_MIN);
    printf("long take %ld bytes\n", sizeof(long));

    printf("\n");
    printf("The max value of short is: %d\n", SHRT_MAX);
    printf("The min value of short is: %d\n", SHRT_MIN);
    printf("short take %ld bytes\n", sizeof(short));

    printf("\n");
    printf("The max value of float is: %f\n", FLT_MAX);
    printf("The min value of float is: %.50f\n", FLT_MIN);
    printf("float take %ld bytes\n", sizeof(float));


    printf("\n");
    printf("The max value of double is: %lf\n", DBL_MAX);
    printf("The min value of double is: %.50lf\n", DBL_MIN);
    printf("double take %ld bytes\n", sizeof(double));

    printf("\n");
    printf("The max value of char is: %d\n", CHAR_MAX);
    printf("The min value of char is: %d\n", CHAR_MIN);
    printf("char take %ld bytes\n", sizeof(char));
}
