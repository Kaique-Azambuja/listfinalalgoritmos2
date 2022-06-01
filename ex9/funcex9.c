#include <stdio.h>
#include "funcex9.h"

void searchFile(FILE *f){
    int control=0;
    char ch;
    do{
        ch = fgetc(f);
        if((ch=='a'||ch=='A')||(ch=='e'||ch=='E')||(ch=='i'||ch=='I')||(ch=='o'||ch=='O')||(ch=='u'||ch=='U')) control++;
    }while(ch != EOF);
    printf("The file have %d vowel.\n", control);
}