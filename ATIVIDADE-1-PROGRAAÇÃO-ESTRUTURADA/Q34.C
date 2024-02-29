#include <stdio.h>

int main(){
    float raio, perimetro;
    float pi = 3.14;
    printf("Qual o raio do circulo? ");
    scanf("%f",&raio);
    perimetro = 2 * pi * raio;
    printf("O perimetro é de %.2f",perimetro);
    return 0;
}

