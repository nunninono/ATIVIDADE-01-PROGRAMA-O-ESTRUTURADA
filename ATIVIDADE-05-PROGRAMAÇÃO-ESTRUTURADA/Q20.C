#include <stdio.h>

int main(){
    int num, media;
    int soma = 0;
    int cont = -1;
    do{
        printf("Insira um numero inteiro(0 para parar):\n ");
        scanf("%d",&num);
        if(num % 3 == 0){
            cont += 1;
            soma += num;
        }
    }   
    while(num != 0);
    media = soma/cont;
    printf("A média dos numeros divisíveis por 3 é: %d\n",media);
}
