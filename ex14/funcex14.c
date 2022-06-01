#include <stdio.h>
#include <ctype.h>
#include "funcex14.h"
void replace(FILE *fileRead, FILE *fileWrite){
    int ch;
    ch=fgetc(fileRead);
    while(ch!=EOF){
        fputc(toupper(ch),fileWrite);
        ch=fgetc(fileRead);
    }
}