#include <iostream>
#include "funcex2.h"
//use gcc main.cpp funcex2.cpp -o ex2 and use ./ex2 to run
int main(){
    float *array;
    int lenght;
    printf("Input a lenght: ");
    scanf("%d",&lenght);
    if((alloc(array))==1){
        printf("Allocation memory successful\n");
    }else printf("Allocation memory failed\n");
    if((alloc(array,lenght))==1){
        printf("Allocation memory successful\n");
    }else printf("Allocation memory failed\n");
}