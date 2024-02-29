#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int num1,soma, num2;
    printf("Escolha o primeiro numero: ");
    scanf("%d",&num1);
    printf("Escolha o segundo numero: ");
    scanf("%d",&num2);
    soma = num1 + num2;
    printf("A soma entre %d e %d é igual a %d", num1, num2, soma);
    return 0;
}
