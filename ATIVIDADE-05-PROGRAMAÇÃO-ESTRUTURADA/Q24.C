#include <stdio.h>

int main(){
    int num;
    int par = -1;
    int impar = 0;
    do{
       printf("Insira um numero(0 para parar):\n ");
       scanf("%d",&num);
       if(num % 2 == 0){
           par += 1;
       }
       else{
           impar += 1;
       }
    }
    while(num != 0);
    printf("Numero de impares: %d\n",impar);
    printf("Numero de pares: %d",par);
    return 0;
}