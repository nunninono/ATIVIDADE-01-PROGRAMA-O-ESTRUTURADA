#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int num;
    printf("Digite um numero inteiro(POSITIVO ou NEGATIVO): ");
    scanf("%d",&num);
    if (num < 0){
        printf("O numero digitado %d é NEGATIVO!!",num);
    } 
    else{
        printf("O numero %d digitado é POSITIVO!!",num);
    }
    return 0;
}
