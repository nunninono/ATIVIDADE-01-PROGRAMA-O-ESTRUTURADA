#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d",&num);
    if (num % 2 == 0){
        printf("O numero digitado %d é par!!",num);
    } 
    else{
        printf("O numero %d digitado é impar!!",num);
    }
    return 0;
}
