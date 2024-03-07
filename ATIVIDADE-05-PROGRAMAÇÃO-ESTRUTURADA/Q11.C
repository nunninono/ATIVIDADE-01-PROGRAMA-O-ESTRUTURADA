#include <stdio.h>

int main(){
    int num, maior, menor;
    printf("Digite um numero inteiro: ");
    scanf("%d",&num);
    maior = num;
    menor = num;
    do{
        printf("Digite um numero inteiro: ");
        scanf("%d",&num);
        if (num == 0){
            break;
        }
        else if (num > maior){
            maior = num;
        }
        else if(num < menor){
            menor = num;
        }
    }
    while (num != 0);
    printf("Dentre os numeros listados temos o MAIOR: %d e o MENOR: %d",maior, menor);
    return 0;
}
