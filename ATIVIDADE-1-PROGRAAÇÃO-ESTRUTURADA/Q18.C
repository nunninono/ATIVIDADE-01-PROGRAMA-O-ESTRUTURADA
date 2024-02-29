#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int main(){
    char nome[15];
    int letras;
    printf("Digite seu nome: ");
    scanf("%s",nome);
    letras = strlen(nome);
    if (letras > 5){
        printf("%s tem MAIS de 5 letras!",nome);
    }
    if (letras < 5){
        printf("%s tem MENOS de 5 letras!",nome);
    }
    if (letras == 5){
        printf("%s tem EXATAMENTE 5 letras!!",nome);
    }
    return 0;
}
