#include <stdio.h>
#include <stdlib.h>
#include "funcex3.h"

int main(){
    int *array1,lenght,number1;
    float *array2,number2;
    printf("Input a length of arrays: ");
    scanf("%d",&lenght);
    printf("Input a number to array integer: ");
    scanf("%d",&number1);
    printf("Input a number to array float: ");
    scanf("%f",&number2);
    initialInt(array1,lenght,number1);
    initialFloat(array2,lenght,number2);
}