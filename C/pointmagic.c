#include<stdio.h>
#include<stdint.h>

int main()
{
    int32_t array[4] = {1,2,3,4};
    int8_t *ptr = (int8_t *)array;
    // ptr++;
    *ptr += 254;
    for(size_t i = 0; i< 4 ; i++){
        printf("array[%ld] = %d\n",i,array[i]);
    }
}