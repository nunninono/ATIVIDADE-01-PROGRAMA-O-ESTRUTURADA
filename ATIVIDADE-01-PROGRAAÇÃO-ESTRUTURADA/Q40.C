#include <stdio.h>

int main(){
    int num1, num2, num3, resultado;
    printf("Digite um numero inteiro: ");
    scanf("%d",&num1);
    printf("Digite outro numero inteiro: ");
    scanf("%d",&num2);    
    printf("Digite outro numero inteiro: ");
    scanf("%d",&num3);
    resultado = (num1 + num2) * num3;
    printf("O resultado da operação é %d", resultado);
    return 0;
}
