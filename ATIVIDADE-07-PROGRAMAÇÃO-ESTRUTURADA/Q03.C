#include <stdio.h>

int main(){
    int num1, num2;
    printf("Insira um numero inteiro: \n");
    scanf("%d", &num1);
    printf("Insira um numero inteiro: \n");
    scanf("%d", &num2);
    printf("O endereço de memória de %d é %p\n", num1, &num1);
    printf("O endereço de memória de %d é %p\n", num2, &num2);

    return 0;
}
