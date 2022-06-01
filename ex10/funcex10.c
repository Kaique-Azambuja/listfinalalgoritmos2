#include <stdio.h>
#include "funcex10.h"

void searchFile(FILE *f){
    int controlVowel=0,controlConsonant=0;
    char ch;
    do{
        ch = fgetc(f);
        if((ch=='a'||ch=='A')||(ch=='e'||ch=='E')||(ch=='i'||ch=='I')||(ch=='o'||ch=='O')||(ch=='u'||ch=='U')) controlVowel++;
        if((ch=='b'||ch=='B')||(ch=='c'||ch=='C')||(ch=='d'||ch=='D')||(ch=='f'||ch=='F')||(ch=='g'||ch=='G')||(ch=='h'||ch=='H')||(ch=='j'||ch=='J')||(ch=='k'||ch=='K')||(ch=='l'||ch=='L')||(ch=='m'||ch=='M')||(ch=='n'||ch=='N')||(ch=='p'||ch=='P')||(ch=='q'||ch=='Q')||(ch=='r'||ch=='R')||(ch=='s'||ch=='S')||(ch=='t'||ch=='T')||(ch=='v'||ch=='V')||(ch=='w'||ch=='W')||(ch=='x'||ch=='X')||(ch=='y'||ch=='Y')||(ch=='z'||ch=='Z')) controlConsonant++;
    }while(ch != EOF);
    printf("The file have %d vowel(s) and have %d consonant(s)\n", controlVowel, controlConsonant);
}