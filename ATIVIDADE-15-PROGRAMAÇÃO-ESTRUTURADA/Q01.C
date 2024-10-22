#include <stdio.h>

int main(){

    FILE *arquivo;

    arquivo = fopen("arq.txt", "w");

    if (arquivo == NULL){
        printf("Falha em abrir o arquivo!");
        return 0;
    }

    char entrada;
    printf("Insira caracteres:(0 pra parar)\n");
    while(1){
        scanf(" %c", &entrada);

        if (entrada != '0'){
            fprintf(arquivo, "%c\n", entrada);
        }
        else{
            printf("\n");
            fclose(arquivo);
            break;
        }
    }

    fopen("arq.txt", "r");

    char resultado[50];
    printf("Resultados:\n");
    while(fgets(resultado, sizeof(resultado), arquivo)){
        printf("%s", resultado);
    }

    fclose(arquivo);
    return 0;
}