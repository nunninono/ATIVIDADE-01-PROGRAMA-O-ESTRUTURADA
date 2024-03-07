#include <stdio.h>

int main(){
    int num1, num2;
    printf("Digite um nmero inteiro: ");
    scanf("%d",&num1);
    printf("Digite outro numero inteiro: ");
    scanf("%d",&num2);
    if (num1 > num2){
        printf("%d é maior!!", num1);
    }
    else if(num2 > num1){
        printf("%d é maior!!", num2);
    }
    else{
        printf("Eles são iguais");
    }
    return 0;
}