#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int num1, num2;
    printf("Digite um numero inteiro: ");
    scanf("%d",&num1);
    printf("Digite outro numero inteiro: ");
    scanf("%d",&num2);
    if (num1 > num2){
        printf("%d é o maior dentre eles!!",num1);
    } 
    if (num1 == num2){
        printf("%d e %d são iguais",num1, num2);
    }
    if (num1 < num2){
        printf("%d é o maior dentre eles!!",num2);
    }
    return 0;
}
