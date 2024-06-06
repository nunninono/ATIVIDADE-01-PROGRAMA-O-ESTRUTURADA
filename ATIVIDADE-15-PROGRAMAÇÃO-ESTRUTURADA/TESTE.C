#include <stdio.h>

int main(){

    FILE *numeros;
    FILE *palavras;

    numeros = fopen("numeros.txt", "r");
    palavras = fopen("frases.txt", "r");

    if (numeros == NULL || palavras == NULL){
        printf("Erro ao abrir o arquivo!");
        return 1;
    }

    int x, y, z;
    fscanf(numeros, "%d %d %d", &x, &y, &z);
    char palavra1[20], palavra2[20], palavra3[20];
    fscanf(palavras, "%s %s %s", palavra1, palavra2, palavra3);

    printf("%s %s %s\n", palavra1, palavra2, palavra3);
    printf("%d %d %d", x, y, z);

    fclose(numeros);
    fclose(palavras);

    return 0;
}