#include <stdio.h>
#include "funcex15.h"

int main(){
    FILE *fileRead1,*fileRead2,*fileWrite;
    char nameoffile1[100],nameoffile2[100];
    printf("Input 2 names of file to combine.\nInput a name to 1st file: ");
    gets(nameoffile1);
    fflush(stdin);
    printf("Input a name to 2nd file: ");
    gets(nameoffile2);
    fflush(stdin);
    if((fileRead1 = fopen(nameoffile1,"r"))==NULL){
        printf("Error: Could not open the 1st file.\nInput a valid name: ");
        gets(nameoffile1);
        fileRead1 = fopen(nameoffile1,"r");
    }
    if((fileRead2 = fopen(nameoffile2,"r"))==NULL){
        printf("Error: Could not open the 2nd file.\nInput a valid name: ");
        gets(nameoffile2);
        fileRead2 = fopen(nameoffile2,"r");
    }
    printf("The name of the file combined is 'combined.txt'\n");
    if((fileWrite = fopen("combined.txt","w"))==NULL){
        printf("Error: Could not write the combined file.");
        fileWrite = fopen("combined.txt","w");
    }
    combineFiles(fileRead1,fileRead2,fileWrite);
    return 0;
}