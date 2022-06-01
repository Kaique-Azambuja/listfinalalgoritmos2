#ifndef FUNCTION_19
#define FUNCTION_19
#include <stdio.h>
typedef struct{
    char name[100];
    char tel[12];
}Informations;
void printInfo(FILE *fileWrite,Informations info);
#endif