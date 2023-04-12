#include<stdio.h>

int main()
{
    char food[5];
    printf("Enter favorite food: ");
    fgets(food, sizeof(food),stdin);
    printf("Your favorite food: %s\n", food);
    char *t = food;
    fgets(t, 5, stdin);
    printf("Your favorite food: %s\n", food);
}
void index_point()
{
    char s = "How big the size is?";
    char *t = s;
    printf("The location of s: %p\n", s);
    printf("What is t?: %p\n", t);
    printf("The location of t: %p\n", &t);

}
void whystart0()
{

    int drinks[] = {3,5,2};
    for(int i=0; i<3 ;i++){
        printf("%d order: %d drinks\n",i+1,drinks[i]);
        printf("%d order: %d drinks\n",i+1,*(drinks+i));
    }
}
void skip(char *msg){
    char *ms = "Don't call me";
    skip(msg);
    puts(msg);
}
