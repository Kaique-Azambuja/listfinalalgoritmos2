#include <stdio.h>
#include "funcex11.h"
void searchChar(FILE *f, char test){
    char ch;
    int control=0;
    do{
        ch = fgetc(f);
        if(ch==test) control++;
    }while(ch != EOF);
    printf("The fila have %d characters %c\n",control,test);
}