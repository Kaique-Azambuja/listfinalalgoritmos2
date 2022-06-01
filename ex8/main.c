#include <stdio.h>
#include <stdlib.h>
void inputName(char *name);
void getLine(FILE *f);
int main(){
    char nameofFile[100];
    FILE *file;
    inputName(nameofFile);
    if((file=fopen(nameofFile,"r"))==NULL){
        printf("Error: Could not open the file, please try again.\nInput the name of file: ");
        gets(nameofFile);
        fflush(stdin);
        file=fopen(nameofFile,"r");
    }
    getLine(file);
    fclose(file);
    return 0;
}
void inputName(char *name){
    printf("Input a name of file to read: ");
    gets(name);
    fflush(stdin);
}
void getLine(FILE *f){
    int control=0;
    char ch;
    do{
        ch = fgetc(f);
        if(ch=='\n') control++;
    }while(ch != EOF);
    printf("The file have %d lines.\n", control);
}  