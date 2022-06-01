#include <stdio.h>
#include "funcex13.h"

int main(){
    char nameofFileRead[100];
    FILE *fileRead,*fileWrite;
    printf("The name of the file created by the program is file13.txt\n");
    printf("Input a name of file to read: ");
    gets(nameofFileRead);
    if((fileRead = fopen(nameofFileRead,"r")) == NULL){
        printf("Error: Could not open the file for reading\nPlease try again: ");
        gets(nameofFileRead);
        fileRead=fopen(nameofFileRead,"r");
    }
    if((fileWrite=fopen("file13.txt","w"))==NULL){
        printf("Error: Could not open the file for writing\nWe try again.\n");
        fileWrite=fopen("file13.txt","w");
    }
    swapFile(fileRead,fileWrite);
    fclose(fileRead);
    fclose(fileWrite);
    return 0;
}