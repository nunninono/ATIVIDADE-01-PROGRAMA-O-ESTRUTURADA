#include <stdio.h>

int main(){
        int number;
        printf("Digite um numero inteiro: ");
        scanf("%d",&number);
        if (number > 10){
            printf("O valor é maior que 10\n");
        } 
        else if(number == 10){
            printf("O numero é igual a 10\n");
        }
        else{
            printf("O numero é menor que 10\n");
        }
        return 0;
}