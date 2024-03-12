#include<stdio.h>
#include<stdlib.h>        //PRECISO ARRUMAR
#include<string.h>
 
int main(){
    char sequencia[25];
    int numeros;
    printf("Digite uma sequencia de numeros separados por espaço: ");
    scanf("%s",sequencia);
    numeros = strlen(sequencia);
    printf("A sua sequencia teve um total de %d numeros!",numeros);
    return 0;
}
