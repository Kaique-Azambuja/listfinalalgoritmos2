#include <stdio.h>
#include <stdlib.h>
#include "funcex3.h"
void initialInt(int *array, int size,int number){
    array=(int*)malloc(size*sizeof(int));
    for (int i = 0; i < size; i++){
        *(array+i) = number; 
    }
    printf("Array of integers\n\n");
    for(int i = 0; i < size; i++){
        printf("%d\n",*(array+i));
    }
    free(array);
}
void initialFloat(float* array, int size,float number){
    array=(float*)malloc(size*sizeof(float));
    for (int i = 0; i < size; i++){
        *(array+i) = number; 
    }
    printf("Array of floats\n\n");
    for(int i = 0; i < size; i++){
        printf("%.2f\n",*(array+i));
    }
    free(array);
}