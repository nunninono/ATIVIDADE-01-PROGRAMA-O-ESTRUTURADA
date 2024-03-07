#include <stdio.h>

int main(){
    int num, menor;
    printf("Insira um numero(0 para parar): ");
    scanf("%d",&num);
    menor = num;
    do{
        printf("Insira um numero(0 para parar): ");
        scanf("%d",&num);
        if (num > 0 && num % 2 != 0){
            if (num < menor){
                menor = num;
            }
        }
    }
    while(num != 0);
    printf("O menor numero positivo e divisível por 5 é: %d", menor);
}

