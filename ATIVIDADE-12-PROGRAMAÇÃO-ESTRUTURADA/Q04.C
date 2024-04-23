#include <stdio.h>

int main()
{
    char nome[100];
    int i = 0;
    
    printf("Digite o nome: \n");
    fgets(nome, 100, stdin);
    
    for(i = 0; i < 4; i++){
        printf("%c",nome[i]);
    }

    return 0;
}


