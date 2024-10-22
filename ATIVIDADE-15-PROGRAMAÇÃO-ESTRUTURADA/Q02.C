#include <stdio.h>

int main(){

    char escolha[20];
    printf("Insira o nome do arquivo a ser lido:\n");
    scanf("%s", escolha);
    getchar();

    FILE *arquivo = fopen(escolha, "r");
    if (arquivo == NULL){
        printf("Falha ao tentar ler o arquivo!\n");
        return 1;
    }

    char frase[50];
    int linhas = 0;
    while(fgets(frase, sizeof(frase), arquivo)){
        linhas++;
    }

    printf("O arquivo escolhido tem %d linhas.\n", linhas);

    fclose(arquivo);
    return 0;
}