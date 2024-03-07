#include <stdio.h>

int main(){
    int num;
    int media = 0;
    int cont = 0;
    int soma = 0;
    do{
        printf("Insira um numero inteiro(0 para parar):\n ");
        scanf("%d",&num);
        if(num <= 100 && num >= 50){
            cont += 1;
            soma += num;
        }
    }   
    while(num != 0);
    media = soma/cont;
    printf("A média dos numeros entre 50 e 100 é: %d\n",media);
}
