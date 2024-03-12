#include <stdio.h>
#include <stdlib.h>
 
int main(){
    float num1, quadrado;
    printf("Escolha um numero: ");
    scanf("%f",&num1);
    quadrado = num1*num1;
    printf("O quadrado de %.2f é %.2f",num1, quadrado);
    return 0;
}
