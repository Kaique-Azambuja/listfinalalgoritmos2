#include <stdlib.h>
#include "funcex12.h"

int main(){
    FILE *f;
    char fileName[100];
    printf("Input a file name: ");
    gets(fileName);
    fflush(stdin);
    if((f=fopen(fileName,"r"))==NULL){
        printf("Error: Could not open file.\nPlease try again: ");
        gets(fileName);
        f=fopen(fileName,"r");
        fflush(stdin);
    }
    searchLetters(f);
    return 0;
}