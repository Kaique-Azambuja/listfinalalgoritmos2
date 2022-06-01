#include <stdio.h>
void inputElements(int *array,int length){
    for(int i=0;i<length;i++){
        if(i==1){
            printf("Input the %dst element of array: ",i+1);
        }else if(i==2){
            printf("Input the %dnd element of array: ",i+1);
        }else if(i==3){
            printf("Input the %drd element of array: ",i+1);
        }else printf("Input the %dth element of array: ",i+1);
        scanf("%d",(array+i));
    }
}