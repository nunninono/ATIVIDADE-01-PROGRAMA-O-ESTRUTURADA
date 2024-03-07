#include <stdio.h>

int main(){
    int num;
    int par = -1;
    int impar = 0;
    do{
        printf("Insira um numero(0 para parar):\n ");
        scanf("%d",&num);
        if (num % 2 == 0){
            par += 1;
        }
        else if(num % 2 != 0){
            impar += 1;
        }
    }
    while(num != 0);
    printf("Quantidade de numeros PARES: %d\n",par);
    printf("Quantidade de numeros IMPARES: %d",impar);
}
