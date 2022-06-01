#include <stdio.h>
#include <stdlib.h>
#include "funcex14.h"

int main(int argc, char const *argv[]){
    if(argc < 4){
        FILE *fileRead,*fileWrite;
        if((fileRead = fopen(argv[1], "r"))==NULL){
            printf("Error: Cannot open the file to read.");
            exit(1);
        }
        if((fileWrite = fopen(argv[2],"w"))==NULL){
            printf("Error: Cannot open the file to write.");
            exit(1);
        }
        replace(fileRead,fileWrite);
        fclose(fileRead);
        fclose(fileWrite);
    }
}