#include <stdio.h>

int main(){

    FILE *arquivo = fopen("frases.txt", "a");
    
    if (arquivo == NULL){
        printf("Não foi possivel abrir o arquivo!");
        return 0;
    }

    char frase[50];
    printf("Insira o que vc gostaria de escrever no arquivo:\n");
    fgets(frase, sizeof(frase), stdin);

    fprintf(arquivo, "\n%s", frase);
    fclose(arquivo);

    return 0;
}