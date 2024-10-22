#include <stdio.h>

struct Programa{
    char nome[20];
    char endereco_de_telefone[20];
};

int main(){
    struct Programa dados[5];
    struct Programa pessoa1;
    struct Programa pessoa2;
    struct Programa pessoa3;
    struct Programa pessoa4;
    struct Programa pessoa5;

    for (int i = 0; i < 5; i++){
        printf("Insira o nome da pessoa %d:\n", i+1);
        scanf("%s", dados[i].nome);
        printf("Insira o numero de telefone da pessoa %d:\n", i+1);
        scanf("%s", dados[i].endereco_de_telefone);
    }



    return 0;
}