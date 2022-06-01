#include <stdio.h>
#include "funcex15.h"
void combineFiles(FILE *fileRead1, FILE *fileRead2, FILE *fileCombined){
    int ch;
    ch=fgetc(fileRead1);
    while(ch!=EOF){
        fputc(ch,fileCombined);
        ch=fgetc(fileRead1);
    }
    ch=fgetc(fileRead2);
    while(ch!=EOF){
        fputc(ch,fileCombined);
        ch=fgetc(fileRead2);
    }
}