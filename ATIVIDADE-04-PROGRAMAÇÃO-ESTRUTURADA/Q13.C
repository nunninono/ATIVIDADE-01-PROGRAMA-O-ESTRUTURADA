#include <stdio.h>

int main(){
    float salario, aumento;
    printf("Digite o salário que receberá aumento: ");
    scanf("%f",&salario);
    if (salario > 1500){
        salario = salario * 1.15;
        printf("Seu salario após o aumento é de: $%.2f", salario);
    }
    else{
        salario = salario * 1.10;
        printf("Seu salario após o aumento é de: $%.2f", salario);
    }
    return 0;
}
