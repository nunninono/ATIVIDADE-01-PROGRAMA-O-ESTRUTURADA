#include <stdio.h>
#include <string.h>

struct Filme{
    char nome[50];
    int ano;
    float duracao;
};

struct Diretor{
    char nome[21];
    int quantidade_filmes;
    struct Filme filmes[10];
};

int main(){
    struct Diretor diretores[5];

    for (int i = 0; i < 5; i++){
        printf("Insira o nome do diretor %d:\n", i+1);
        fgets(diretores[i].nome, sizeof(diretores[i].nome), stdin);
        printf("Insira a quantidade de filmes do diretor %d:\n", i+1); 
        scanf("%d", &diretores[i].quantidade_filmes);
        getchar();
        for (int j = 0; j < diretores[i].quantidade_filmes; j++){
            printf("Insira o nome do filme %d do diretor %d:\n", j+1, i+1);
            fgets(diretores[i].filmes[j].nome, sizeof(diretores[i].filmes[j].nome), stdin);
            printf("Insira o ano de lancamento do filme %d do diretor %d:\n", j+1, i+1);
            scanf("%d", &diretores[i].filmes[j].ano);
            getchar();
            printf("Insira o tempo de duracao do filme %d do diretor %d:\n", j+1, i+1);
            scanf("%f", &diretores[i].filmes[j].duracao);
            getchar();
        }
    }

    char busca[21];

    while(1){
        printf("Insira o nome do diretor a ser buscado:\n");
        fgets(busca, sizeof(busca), stdin);

        if (busca[0] != ' '){

            for (int i = 0; i < 5; i++){
                if (strcmp(busca, diretores[i].nome) == 0){
                    for (int j = 0; j < diretores[i].quantidade_filmes; j++){
                        printf("filme %d: %s\n", j+1, diretores[i].filmes[j].nome);
                    }
                }
            }
        } 
        else{
            printf("O filme digitado nao foi achado.\n");
            break;
        }   
    }

    return 0;
}