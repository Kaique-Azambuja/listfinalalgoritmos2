#ifndef FUNCTION_7
#define FUNCTION_7
typedef struct{
    int day,month,year;
}date;
typedef struct{
    char name[100];
    date born;
    char cpf[11];
}someone;
void inputInformations(someone *who);
void outputInformations(someone *who);
#endif