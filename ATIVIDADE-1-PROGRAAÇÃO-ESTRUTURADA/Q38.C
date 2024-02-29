#include <stdio.h>

int main(){
    float cotação, valor, dolar;
    printf("Qual o valor a ser convertido? ");
    scanf("%f",&valor);
    printf("Qual a cotação atual do dolar? ");
    scanf("%f",&cotação);
    dolar = valor * cotação;
    printf("%.2f reais em doalares é: %.2f", valor,dolar);
    return 0;
}
