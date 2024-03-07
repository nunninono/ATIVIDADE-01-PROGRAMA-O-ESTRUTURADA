#include <stdio.h>

int main(){
    int num, digito, cubo;
    int soma = 0;
    printf("Insira um numero inteiro: ");
    scanf("%d",&num);
    do{
        soma += num % 10;
        num = num/10;
   }
   while(num > 0);
   cubo = soma * soma * soma;
   printf("%d",cubo);
    return 0;
}