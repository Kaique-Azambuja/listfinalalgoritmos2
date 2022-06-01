#include <stdio.h>
#include "funcex17.h"
void countLetters(FILE *fileReaded,char character){
    char ch;
    int count=0;
    ch=fgetc(fileReaded);
    while(ch!=EOF){
        if(ch==character){
            count++;
        }
        ch=fgetc(fileReaded);
    }
    printf("The letter %c has founded %d times.\n", character,count);
}