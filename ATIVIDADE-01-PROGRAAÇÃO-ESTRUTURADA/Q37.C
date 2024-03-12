#include <stdio.h>

int main(){
    int idade, meses, dias;
    printf("Qual a sua idade? ");
    scanf("%d",&idade);
    meses = idade * 12;
    dias = meses * 365;
    printf("Com %d anos voce ja viveu %d meses e %d dias",idade, meses, dias);
    return 0;
}
