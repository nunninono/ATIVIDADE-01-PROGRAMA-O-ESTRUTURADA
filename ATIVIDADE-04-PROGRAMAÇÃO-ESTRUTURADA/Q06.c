#include<stdio.h>
int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    if(num%2 == 0){
        printf("O numero é PAR!!");
    }
    else{
        printf("O numero é IMPAR!!");
    }
    return 0;
}