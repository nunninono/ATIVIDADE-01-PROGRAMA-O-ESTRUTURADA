#include <stdio.h>

int main()
{
    char nome[20];
    
    printf("Insira um nome: ");
    fgets(nome, sizeof(nome), stdin);
    
    if (nome[0] == 'a' || nome[0] == 'A'){
        printf("O nome é: %s", nome);
    }

    return 0;
}

