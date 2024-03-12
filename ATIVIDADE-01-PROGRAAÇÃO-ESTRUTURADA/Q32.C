#include <stdio.h>

int main(){
    int num1, num2, soma, dif, prod, quo;
    printf("Informe um numero: ");
    scanf("%d",&num1);
    printf("Informe outro numero: ");
    scanf("%d",&num2);
    dif = num1 - num2;
    soma = num1 + num2;
    prod = num1 * num2;
    quo = num1 / num2;
    printf("soma: %d \ndiferença: %d \nproduto: %d \nquociente: %d",soma, dif, prod, quo);
    return 0;
}

