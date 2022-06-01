#include <stdio.h>
#include "funcex13.h"
void swapFile(FILE *fileRead, FILE *fileWrite){
    char cr,cw;
    cr = fgetc(fileRead);
    while(cr != EOF){
        if((cr=='a'||cr=='A')||(cr=='e'||cr=='E')||(cr=='i'||cr=='I')||(cr=='o'||cr=='O')||(cr=='u'||cr=='U')) {
            cr='*';
        }
        cw=cr;
        fputc(cr,fileWrite);
        cr = fgetc(fileRead);
    }
}