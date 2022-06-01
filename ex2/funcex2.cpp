#include <iostream>
#include "funcex2.h"
int alloc(float *a){
    if((a=(float *)malloc(sizeof(float)))!=NULL){
        return 1;
    }else return 0;
    free(a);
}
int alloc(float *array, int length){
    if((array=(float *)malloc(length*sizeof(float)))!=NULL){
        return 1;
    }else return 0;
    free(array);
}