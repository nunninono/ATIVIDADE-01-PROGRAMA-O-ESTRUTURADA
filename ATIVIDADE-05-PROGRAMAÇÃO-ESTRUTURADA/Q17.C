#include <stdio.h>

int main(){
    int num;
    int cont = 0;
    do{
        printf("Insira um numero(0 para parar): ");
        scanf("%d",&num);
        if (num == 0){
            break;
        }
        else if(num % 2 != 0){
            do{
                printf("Insira um numero(0 para parar): ");
                scanf("%d",&num);
            }
            while(num != 0);
        }
        else if (num % 2 == 0){
            cont += 1;
        }
    }
    while(num != 0 || num % 2 != 0);
    printf("Ate o primeiro impar digitado foram digitados %d pares!",cont);
}
