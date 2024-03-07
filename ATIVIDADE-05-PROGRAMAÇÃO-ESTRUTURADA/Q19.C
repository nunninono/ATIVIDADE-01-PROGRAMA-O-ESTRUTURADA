#include <stdio.h>

int main(){
    int num;
    int cont2 = -1;
    int cont3 = -1;
    int cont5 = -1;
    do{
        printf("Insira um numero inteiro(0 para parar):\n ");
        scanf("%d",&num);
        if (num % 2 == 0){
            cont2 += 1;
        }
        if(num % 3 == 0){
            cont3 += 1;
        }
        if(num % 5 == 0){
            cont5 += 1;
        }
    }   
    while(num != 0);
    printf("Numeros divisíveis por 2: %d\n",cont2);
    printf("Numeros divisíveis por 3: %d\n",cont3);
    printf("Numeros divisíveis por 5: %d\n",cont5);
}
