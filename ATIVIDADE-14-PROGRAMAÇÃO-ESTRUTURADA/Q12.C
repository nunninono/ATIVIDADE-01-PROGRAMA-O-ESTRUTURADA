#include <stdio.h>
#include <string.h>

struct Vetor{
    char titulo[31];
    char autor[16];
    int ano;
};

int main(){
    struct Vetor livros[5];

    for (int i = 0; i < 5; i++){
        printf("Insira o título do livro %d:\n", i+1);
        //scanf("%[^\n]s", livros[i].titulo);
        //scanf("%s", livros[i].titulo);
        fgets(livros[i].titulo, sizeof(livros[i].titulo), stdin);
        printf("Insira o autor do livro %d:\n", i+1);
        //scanf("%[^\n]s", livros[i].autor);
        //scanf("%s", livros[i].autor);
        fgets(livros[i].autor, sizeof(livros[i].autor), stdin);
        printf("Insira o ano do livro %d:\n", i+1);
        scanf("%d", &livros[i].ano);
        getchar();
    }

    char escolha[31];
    printf("\n\nEscolha o título a ser buscado:\n");
    fgets(escolha, sizeof(escolha), stdin);
    printf("\n\n");
    for (int i = 0; i < 5; i++){
        if (strcmp(livros[i].titulo, escolha) == 0){
            printf("titulo: %s, autor: %s, ano: %d\n", livros[i].titulo, livros[i].autor, livros[i].ano);
        }
    }

    return 0;
}