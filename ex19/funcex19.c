#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "funcex19.h"
void printInfo(FILE *fileWrite,Informations info){
    do{
        printf("Input a name: ");
        fgets(info.name,100,stdin);
        fflush(stdin);
        printf("Input a telephone: ");
        for(int i=0;i<12;i++){
            if(i<2){
                printf("%d digit of DDD: ",i+1);
                scanf("%c",&info.tel[i]);
                fflush(stdin);
                if(info.tel[i]==0) break;
            }
            if(i==2){
                info.tel[i]=' ';
            }
            if(i>2){
                printf("%d digit of number: ",i-2);
                scanf("%c",&info.tel[i]);
                fflush(stdin);
            }

        }
        fflush(stdin);
        if(info.tel[0]!=0){
            fprintf(fileWrite,"%s:%s %s:%s\n","Name",info.name,"Telephone",info.tel);
        }
    }while(info.tel[0]!=0);
}