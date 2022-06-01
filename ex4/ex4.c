#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *file;
    char text;
    if((file = fopen("arq.txt","w"))==NULL){
        printf("Error: Cannot open the arq.txt file.\n");
        file = fopen("arq.txt","w");
    }
    scanf("%c",&text);
    while(text!='0'){
        fprintf(file,"%c",text);
        scanf("%c",&text);
    }
    fclose(file);
    return 0;
}