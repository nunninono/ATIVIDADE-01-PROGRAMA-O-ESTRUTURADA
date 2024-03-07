#include <stdio.h>

int main(){
    int num, espelho;
    int soma = 0;
    printf("Digite um numero: ");
    scanf("%d",&num);
    espelho = num;
    do{
        if (num % 2 == 0){
            soma += num%10;
            num = num/10;
        }
        else{
            num = num/10;
        }
    }
    while(num > 0);
    printf("A soma dos algarismos pares de %d é: %d",espelho, soma);
    return 0;
}

