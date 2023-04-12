#include<stdio.h>

void fortune_cookie(char msg[])
{
    printf("Messages read: %s\n", msg);
    printf("message occupies %ld bytes\n", sizeof(msg));
    printf("The location of msg: %p\n",msg);
}
int main()
{
    char quote[] = "Cookies is yummy";
    printf("Size of quote: %ld\n", sizeof(quote));
    printf("The location of quote: %p\n",&quote);
    fortune_cookie(quote);

}
