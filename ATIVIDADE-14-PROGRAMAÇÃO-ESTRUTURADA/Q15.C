#include <stdio.h>
#include <string.h>

struct Ingrediente{
    char nome[50];
    int quantidade;
};

struct Livro{
    char nome[26];
    int quantidade_ingredientes;
    struct Ingrediente ingredientes[20];
};

int main(){
    struct Livro receita[5];

    for (int i = 0; i < 5; i++){
        printf("Insira o nome da reecita %d:\n", i+1);
        fgets(receita[i].nome, sizeof(receita[i].nome), stdin);
        printf("Insira a quantidade de ingredientes da reecita %d:\n", i+1);
        scanf("%d", &receita[i].quantidade_ingredientes);
        getchar();

        for (int j = 0; j < receita[i].quantidade_ingredientes; j++){
            printf("Insira o %d ingrediente da receita %d:\n", j+1, i+1);
            fgets(receita[i].ingredientes[j].nome, sizeof(receita[i].ingredientes[j].nome), stdin);
            printf("Insira a quantidade do ingrediente %d da receita %d:\n", j+1, i+1);
            scanf("%d", &receita[i].ingredientes[j].quantidade);
            getchar();
        }
    }
    char busca[26];
    
    while(1){
        printf("\n\nInsira o nome da receita que voce quer procurar:\n");
        fgets(busca, sizeof(busca), stdin);

        if (busca[0] != ' '){
            for (int i = 0; i < 5; i++){
                if (strcmp(busca, receita[i].nome) == 0){
                    for (int j = 0; j < receita[i].quantidade_ingredientes; j++){
                        printf("ingrediente numero %d: %s", j+1, receita[i].ingredientes[j].nome);
                    }
                }
            }
        }
        else{
            printf("O nome da receira nao foi achado\n");
            break;
        }
    }


    return 0;
}