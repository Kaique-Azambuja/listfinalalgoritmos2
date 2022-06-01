#include <stdio.h>
#include <stdlib.h>
#include "funcex7.h"
void inputInformations(someone *who){
    printf("Input a name: ");
    gets(who->name);
    fflush(stdin);
    printf("Input a cpf(only numbers): ");
    gets(who->cpf);
    fflush(stdin);
    printf("Input a date (mm dd yyyy): ");
    scanf("%d %d %d",&who->born.day,&who->born.month,&who->born.year);
}
void outputInformations(someone *who){
    printf("Name: %s\n",who->name);
    printf("CPF: %s\n",who->cpf);
    printf("Birth: %d/%d/%d\n",who->born.month,who->born.day,who->born.year);
}