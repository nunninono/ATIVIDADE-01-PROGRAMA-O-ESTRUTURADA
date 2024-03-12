#include <stdio.h>
#include <stdlib.h>
 
int main(){
    char nome[10], sobrenome[10];
    printf("Escreva seu nome: ");
    scanf("%s",nome);
    printf("Escreva seu sobrenome: ");
    scanf("%s",sobrenome);
    printf("Seu nome concatenado é %s %s", nome, sobrenome);
    return 0;
}
