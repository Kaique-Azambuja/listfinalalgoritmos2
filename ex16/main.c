#include <stdio.h>
#include "funcex16.h"

int main(){
    FILE *fileRead,*fileWrite;
    char filenameRead[100],filenameWrite[100];
    printf("Input a file to read: ");
    gets(filenameRead);
    if((fileRead = fopen(filenameRead,"r"))==NULL){
        printf("Error: Could not open the file for readin.\nPlease input a valid file: ");
        gets(filenameRead);
        fileRead=fopen(filenameRead,"r");
    }
    printf("Input a name to file output: ");
    gets(filenameWrite);
    getGreatest(fileRead,fileWrite,filenameWrite);
    return 0;
}