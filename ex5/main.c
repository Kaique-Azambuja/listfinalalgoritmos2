#include <stdio.h>
#include "funcex5.h"

int main(){
    float *array;
    int *array2,lenght;
    printf("Input a lenght array: ");
    scanf("%d",&lenght);
    initializeArray(array,array2,lenght);
    return 0;
}