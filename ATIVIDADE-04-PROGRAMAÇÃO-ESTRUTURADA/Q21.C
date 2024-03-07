#include <stdio.h>

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    switch(num){
        case 1:
            printf("Soma!");
            break;
        case 2: 
            printf("Subtração!");
            break;
        case 3:
            printf("Multiplicação!");
            break;
        case 4:
            printf("Divisão!");
            break;
    }
    return 0;
}