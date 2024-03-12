#include <stdio.h>

int main(){
    float perimetro, base, altura;
    printf("qual a altura do retangulo? ");
    scanf("%f",&altura);
    printf("qual a base do retangulo? ");
    scanf("%f",&base);
    perimetro = base*2 + altura*2;
    printf("O perimetro do retangulo é de %.2f", perimetro);
    return 0;
}
