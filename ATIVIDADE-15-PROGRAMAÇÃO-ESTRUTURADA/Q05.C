#include <stdio.h>
#include <ctype.h>

int main(){

    char arquivo1[20];
    char arquivo2[20];

    printf("Insira o nome do arquivo 1:\n");
    scanf("%s", arquivo1);
    getchar();

    printf("Insira o nome do arquivo 2:\n");
    scanf("%s", arquivo2);
    getchar();

    FILE *arq1 = fopen(arquivo1, "w");

    if (arquivo1 == NULL){
        printf("Ocorreu um erro ao abrir o arquivo");
        fclose(arq1);
        return 1;
    }

    char conteudo[100];

    printf("Insira o que voce quer escrever no arquivo 1:\n");
    scanf("%s", conteudo);
    getchar();
    fprintf(arq1, "%s", conteudo);
    fclose(arq1);

    FILE *arq2 = fopen(arquivo2, "w");
    
    if (arq2 == NULL){
        printf("Erro ao abrir o arquivo 2");
        fclose(arq2);
        return 1;
    }

    arq1 = fopen(arquivo1, "r");

    char temp;

    while ((temp = fgetc(arq1)) != EOF) {
        temp = toupper(temp);  
        fputc(temp, arq2);  
    }

    printf("Conteudo mudou de %s para %s\n", arquivo1, arquivo2);

    fclose(arq1);
    fclose(arq2);
    return 0;
}