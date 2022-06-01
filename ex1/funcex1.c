#include <stdio.h>
#include <stdlib.h>
#include "funcex1.h"
int aloca(int *ptr, int size){
    if((ptr=(int*)malloc(size*sizeof(int)))!=NULL){
        return 1;
    }else return 0;
    free(ptr);
}