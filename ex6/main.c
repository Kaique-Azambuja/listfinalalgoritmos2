#include <stdio.h>
#include <stdlib.h>
#include "funcex6.h"
int main(){
    int n,*array;
    printf("Input a length of array: ");
    scanf("%d",&n);
    array=(int *)malloc(n*sizeof(int));
    inputElements(array,n);
    printf("\nElements of array\n\n");
    for(int i=0;i<n;i++){
        printf("%d\n",*(array+i));
    }
    free(array);
    return 0;
}