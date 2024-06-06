#include <stdio.h>

int main(){

    char escolha[20];

    printf("Insira o arquivo de texto desejado:\n");
    scanf("%s", escolha);
    getchar();

    FILE *arquivo = fopen(escolha, "r");

    if (arquivo == NULL){
        printf("Erro ao tentar abrir o arquivo!\n");
        fclose(arquivo);
    }

    while(1){
        
    }

    return 0;
}