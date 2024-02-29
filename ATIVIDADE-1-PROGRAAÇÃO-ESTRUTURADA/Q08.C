#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int idade1, idade2, ano;
    printf("Digite seu ano de nascimento: ");
    scanf("%d",&ano);
    idade1 = 2024 - ano;
    idade2 = idade1 - 1;
    printf("Nascendo em %d voce pode ter %d ou %d", ano, idade2, idade1);
    return 0;
}
