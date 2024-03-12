#include <stdio.h>

int main(){
    float C, F;
    printf("Qual a temperatura em Celcius? ");
    scanf("%f",&C);
    F = (C * 9/5) + 32;
    printf("A temperatura em Fharenheit é: %.1fF",F);
    return 0;
}
