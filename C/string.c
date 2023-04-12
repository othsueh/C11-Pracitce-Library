#include<stdio.h>
#include<string.h>

int main()
{
    char s0[] = "fdsfdsf";
    char s1[] = "fds";
    if(strstr(s0,s1)) printf("I found the fsd in s0!\n");
    if(strchr(s0,'f')) printf("I found the f in s0!\n");
    printf("The connection of s0 and s1 is: %s\n", strcat(s0,s1));
    return 0;
}
