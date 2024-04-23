#include <stdio.h>

int main()
{
    char nome[20];
    int i = 0;
    int contador = 0;
    
    printf("Digite o nome:\n");
    fgets(nome, 20, stdin);
    
    while(nome[i] != '\0'){
        i++;
    }
    
    printf("O numero de caracteres no nome é: %d", i - 1);
    
    return 0;
}