#include <stdio.h>
#include "funcex17.h"

int main(){
    FILE *fileRead;
    char name[100],character;
    printf("Input a file to read: ");
    gets(name);
    fflush(stdin);
    if((fileRead = fopen(name, "r")) == NULL){
        printf("Error: Could not open file to read.\nInput a valid file to read: ");
        gets(name);
        fileRead=fopen(name, "r");
    }
    printf("Input a char to find in the file: ");
    scanf("%c",&character);
    fflush(stdin);
    countLetters(fileRead,character);
    fclose(fileRead);
    return 0;
}