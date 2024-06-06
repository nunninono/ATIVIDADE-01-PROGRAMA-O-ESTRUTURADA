#include <stdio.h>

int main(){
    
    char nome_arquivo[20];

    printf("Insira o nome do arquivo:\n");
    scanf("%s", nome_arquivo);
    getchar();

    FILE *arquivo = fopen(nome_arquivo, "r");

    if (arquivo == NULL){
        fclose(arquivo);
        return 1;
    }

    char temp;

    while(temp = fgets(arquivo) != EOF){

    }

    return 0;
}