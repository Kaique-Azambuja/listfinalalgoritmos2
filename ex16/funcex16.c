#include <stdio.h>
#include "funcex16.h"
void getGreatest(FILE *fileReaded,FILE *fileWritten,char name[]){
    char cityName[40];
    int habitant,plus,control=0;
    while(fscanf(fileReaded,"%s %d\n",cityName,&habitant)!=EOF){
        if(control==0){
            plus=habitant;
            control++;
        }
        if(plus<habitant){
            plus=habitant;
        }
        if(plus==habitant){
            fileWritten=fopen(name,"w");
            fprintf(fileWritten,"%s %d",cityName,habitant);
            fclose(fileWritten);
        }
    }
    fclose(fileReaded);
}
