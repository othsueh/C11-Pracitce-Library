#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

void day(int32_t**, size_t, size_t);
int main()
{
    size_t size_row = 0, size_col = 0;
    int32_t *ptr = NULL;
    printf("row you want: ");
    scanf("%lu", &size_row);
    printf("col you want: ");
    scanf("%lu", &size_col);
    day(&ptr, size_row, size_col);
    for(size_t i = 0 ;i< size_row ;i++){
        for(size_t j = 0 ;j< size_col ;j++){
            printf("%4d",*(ptr + i*size_col + j));
        }
        printf("\n");
    }
    free(ptr);
    return 0;

}
void day(int32_t **ptr, size_t row, size_t col)
{
    *ptr = calloc(sizeof(int32_t), row*col);
    for(size_t i = 1; i <= row; i++){
        for(size_t j = 1; j <= col; j++){
            *(*ptr + (i-1)*col + (j-1)) = i*j;
        }
    }
}