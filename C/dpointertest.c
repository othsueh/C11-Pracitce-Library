#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

void mem_all(int32_t **, size_t);

int main()
{
    int32_t **ptr1 = NULL;
    int32_t *ptr = NULL;
    size_t size = 0;
    scanf("%lu", &size);
    mem_all(&ptr, size);
    for(size_t i = 0; i < size; i++){
        printf("%d ", *(ptr+i));
        if(i%10==9) printf("\n");
    }
    printf("%lu",sizeof(ptr1));
    free(ptr);
}
void mem_all(int32_t **ptr, size_t size)
{
    *ptr = malloc(sizeof(int32_t)*size);
    for(size_t i = 0; i < size; i++){
        *(*ptr+i) = i;
    }
    return;
}