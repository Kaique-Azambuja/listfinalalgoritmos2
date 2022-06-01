#include <stdio.h>
#include "funcex1.h"
//use ggc main.c funcex1.c -o ex1 to compile and use ./ex1 to run
int main(){
    int *array,tam;
    printf("Input a length: ");
    scanf("%d",&tam);
    printf("%d\n",aloca(array,tam));
}