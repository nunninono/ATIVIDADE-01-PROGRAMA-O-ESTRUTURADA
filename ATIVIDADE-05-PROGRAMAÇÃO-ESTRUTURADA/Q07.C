#include <stdio.h>

int main(){
    int num, numero, espelho;
    int contrario = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d",&num);
    espelho = num;
    do{
        numero = num % 10;
        contrario = (contrario * 10) + numero;
        num = num/10;
    }
    while(num > 0);
    printf("o inverso de %d é %d",espelho, contrario);
    return 0;
}
