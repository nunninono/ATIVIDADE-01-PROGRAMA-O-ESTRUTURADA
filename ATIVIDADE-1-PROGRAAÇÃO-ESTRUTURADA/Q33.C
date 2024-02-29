#include <stdio.h>

int main(){
    float base, altura, area;
    printf("Qual a base do triangulo? ");
    scanf("%f",&base);
    printf("Qual a altura do triangulo? ");
    scanf("%f",&altura);
    area = (base * altura)/2;
    printf("A area do triangulo é %.2f",area);
    return 0;
}

