#include <stdio.h>

int main(){
    int num;
    int cont = 0;
    do{
        printf("Insira um numero inteiro(0 para parar):\n ");
        scanf("%d",&num);
        if(num >= 100){
            cont += 1;
        }
    }   
    while(num != 0);
    printf("A quantidade de numeros com 3 digitos ou mais é: %d\n",cont);
}
