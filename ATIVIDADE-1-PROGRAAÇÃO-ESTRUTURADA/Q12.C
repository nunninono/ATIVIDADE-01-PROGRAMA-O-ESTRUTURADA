#include <stdio.h>
#include <stdlib.h>
 
int main(){
    char nome[12], sobrenome[12];
    printf("Digite o seu nome: ");
    scanf("%s",nome);
    printf("Digite seu sobrenome: ");
    scanf("%s",sobrenome);
    printf("Seu nome ao contrario é %s %s!!",sobrenome, nome);
    return 0;    
}