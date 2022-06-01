#include <stdio.h>
#include "funcex11.h"

int main(){
    FILE *file;
    char nameofFile[100],choosen;
    printf("Input a name of file: ");
    gets(nameofFile);
    fflush(stdin);
    printf("Input a character: ");
    scanf("%c",&choosen);
    if((file=fopen(nameofFile, "r"))==NULL){
        printf("Error: Cannot open file.\nPlease input a correct file name: ");
        gets(nameofFile);
        fflush(stdin);
        file=fopen(nameofFile, "r");
    }
    searchChar(file,choosen);
    fclose(file);
    return 0;
}