#include <stdio.h>

struct Pessoa{
    char nome[50];
    int idade;
    char endereco[50];
};

int main(){
    struct Pessoa pessoa1;
    printf("Insira o nome da pessoa:\n");
    scanf("%s", pessoa1.nome);
    printf("Insira a idade da pessoa:\n");
    scanf("%d", &pessoa1.idade);
    printf("Insira o endereço da pessoa:\n");
    scanf("%s", pessoa1.endereco);

    return 0;
}