#include<stdio.h>
#include<math.h>

int main(){
    float num1, num2, resto;
    printf("Insira um numero decimal: ");
    scanf("%f",&num1);
    printf("Insira outro numero decimal: ");
    scanf("%f",&num2);
    resto = fmod(num1, num2);
    printf("O resto da divisão entre %.2f e %.2f resulta em %.2f!!!",num1, num2, resto);
    return 0;
}
