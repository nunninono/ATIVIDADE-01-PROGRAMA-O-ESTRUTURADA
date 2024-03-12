#include <stdio.h>
#include <stdlib.h>      //preciso ajeitar
#include <string.h>
 
int main(){
    char termo[25];
    int tamanho;
    printf("Digite algo: ");
    scanf("%s",termo);
    tamanho = strlen(termo);
    printf("O numero de caracteres na frase ou termo escrito(desconsiderando espaços) é %d",tamanho);
    return 0;
}
