#include <stdio.h>

int main(){

    FILE *file;

    file = fopen("frases.txt", "r");

    if (file == NULL){
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    char frase[100];

    while(fgets(frase, sizeof(frase), file) != NULL){
        printf("%s", frase);
    }

    fclose(file);

    return 0;
}
