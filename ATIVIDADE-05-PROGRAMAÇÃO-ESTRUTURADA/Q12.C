#include <stdio.h>

int main(){
    int num, media;
    int soma = 0;
    int cont = 0;
    do{
        printf("Insira um numero inteiro (-1 para parar): ");
        scanf("%d",&num);
        if (num == -1){
            break;
        }
        soma += num;
        cont += 1;
    }
    while (num > 0);
    media = soma/cont;
    printf("soma %d", soma);
    printf("cont %d", cont);
    printf("A média dos numeros digitados é: %d", media);
    return 0;
}