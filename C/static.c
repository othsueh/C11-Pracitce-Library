#include <stdio.h>

int runner();

int main()
{
    printf("%d\n", runner());
    printf("%d\n", runner());
}
int runner()
{
    static int count = 0;
    count++;
    return count;
}