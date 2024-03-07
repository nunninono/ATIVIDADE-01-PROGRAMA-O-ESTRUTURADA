#include <stdio.h>

int main(){
    float altura, soma, media;
    int cont = 1;
    do {
        printf("Insira a altura da pessoa: ");
        scanf("%f",&altura);
        soma += altura;
        cont += 1;
    }
    while(cont <= 5);
    media = soma/5;
    printf("A média das 5 alturas é %.2f",media);
    return 0;
}
