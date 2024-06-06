#include <stdio.h>

int main(){

    FILE *arquivo = fopen("questao04.txt", "r");

    if (arquivo == NULL){
        printf("Ocorreu um problema ao abrir o arquivo");
        fclose(arquivo);
        return 1;
    }

    int cont = 0;
    char caractere;
    char temporario;

    printf("Insira um caractere a ser buscado:\n");
    scanf(" %c", &caractere);
    getchar();

    while(1){

        temporario = fgetc(arquivo);
        if (temporario == EOF){
            break;
        }
        if (temporario == caractere){
            cont++;
        }
    }

    fclose(arquivo);

    printf("O caractere '%c' aparece %d vezes no arquivo", caractere, cont);

    return 0;
}