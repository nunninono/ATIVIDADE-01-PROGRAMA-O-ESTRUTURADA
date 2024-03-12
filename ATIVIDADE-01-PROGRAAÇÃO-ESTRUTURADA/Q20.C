#include<stdio.h>
#include<stdlib.h>
 
int main(){
    float base, altura, a;
    printf("Insira a altura do triangulo: ");
    scanf("%f",&altura);
    printf("Insira a base do triangulo: ");
    scanf("%f",&base);
    a = base * altura;
    printf("Um triangulo de base %.2f e altura %.2f tem como area %.2fm²",base, altura, a);
    return 0;
}
