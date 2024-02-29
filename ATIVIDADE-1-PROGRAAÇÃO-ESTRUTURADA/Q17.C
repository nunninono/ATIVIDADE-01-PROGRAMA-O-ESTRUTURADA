#include<stdio.h>
#include<stdlib.h>
 
int main(){
    float altura, peso, IMC;
    printf("Insira sua altura: ");
    scanf("%f",&altura);
    printf("Insira seu peso: ");
    scanf("%f",&peso);
    IMC = peso / (altura * altura);
    printf("O seu IMC tem o valor de %.2f",IMC);
    return 0;
}
