#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcex5.h"
void initializeArray(float* array, int*array2,int length){
    srand(time(NULL));
    array=(float*)malloc(length*sizeof(float));
    array2=(int*)malloc(length*sizeof(int));
    for(int i=0; i<length; i++){
        *(array+i)=((float)rand()/(float)(RAND_MAX)*10);
        *(array2+i)=rand()%10;
    }
    printf("\nArray of floats\n\n");
    for(int i=0; i<length; i++){
        printf("%f\n",*(array+i));
    }
    printf("\nArray of integers\n\n");
    for(int i=0; i<length; i++){
        printf("%d\n",*(array2+i));
    }
    free(array);
    free(array2);
}