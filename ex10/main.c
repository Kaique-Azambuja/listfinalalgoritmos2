#include <stdio.h>
#include "funcex10.h"

int main(){
    FILE *file;
    char nameofFile[100];
    printf("Input a name of file: ");
    gets(nameofFile);
    fflush(stdin);
    if((file=fopen(nameofFile, "r"))==NULL){
        printf("Error: Cannot open file.\nPlease input a correct file name: ");
        gets(nameofFile);
        fflush(stdin);
        file=fopen(nameofFile, "r");
    }
    searchFile(file);
    fclose(file);
    return 0;
}