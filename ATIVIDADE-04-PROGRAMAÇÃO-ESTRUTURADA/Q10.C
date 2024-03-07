#include <stdio.h>

int main(){
    float num1, num2, num3;
    printf("Escolha um numero: ");
    scanf("%f",&num1);
    printf("Escolha um numero: ");
    scanf("%f",&num2);
    printf("Escolha um numero: ");
    scanf("%f",&num3);
    if (num1 > num2 && num2 > num3) {
        printf("Em ordem crescente: %.2f %.2f %.2f", num3, num2, num1);
    } 
    else if (num1 > num3 && num3 > num2) {
        printf("Em ordem crescente: %.2f %.2f %.2f", num2, num3, num1);
    } 
    else if (num2 > num1 && num1 > num3) {
        printf("Em ordem crescente: %.2f %.2f %.2f", num3, num1, num2);
    } 
    else if (num2 > num3 && num3 > num1) {
        printf("Em ordem crescente: %.2f %.2f %.2f", num1, num3, num2);
    } 
    else if (num3 > num1 && num1 > num2) {
        printf("Em ordem crescente: %.2f %.2f %.2f", num2, num1, num3);
    } 
    else if (num3 > num2 && num2 > num1) {
        printf("Em ordem crescente: %.2f %.2f %.2f", num1, num2, num3);
    } 
    else {
        printf("Possivelmente existem numeros iguais");
    }
}

