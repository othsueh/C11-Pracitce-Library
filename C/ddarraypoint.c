#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

int main()
{
    int32_t **ptr = NULL;
    size_t size_row = 0, size_col = 0;
    printf("row you want: ");
    scanf("%lu", &size_row);
    printf("col you want: ");
    scanf("%lu", &size_col);
    ptr = calloc(sizeof(int32_t *),size_row); 
    for(size_t i = 0; i < size_row; i++){
        *(ptr+i) = calloc(sizeof(int32_t),size_col);
        for(size_t j = 0; j< size_col; j++){
            *(*(ptr+i)+j) = (i+1)*(j+1);
        }
    }
    for(size_t i = 0; i < size_row; i++){
        for(size_t j = 0; j < size_col; j++){
            // printf("%d ", *(*(ptr+i)+j));
            printf("%4d ", ptr[i][j]);
        }
        printf("\n");
    }
    free(ptr);
    return 0;
}