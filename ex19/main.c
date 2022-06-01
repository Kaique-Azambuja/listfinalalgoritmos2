#include <stdio.h>
#include <stdlib.h>
#include "funcex19.h"

int main(){
    FILE *fileWrite;
    Informations info;
    printf("The file created by the program is 'fileex19.txt'.\n");
    if((fileWrite = fopen("fileex18.txt", "w"))==NULL){
        exit(1);
    }
    printInfo(fileWrite,info);
    return 0;
}