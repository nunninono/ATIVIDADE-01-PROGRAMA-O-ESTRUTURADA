#include <stdio.h>
#include <string.h>

struct Objeto{
    char nome[20];
    int tamanho;
};

int main(){
    struct Objeto objeto[100];

    int i = 0;

    while(1){
        int continuar = 0;
        printf("Quer continuar?(sim = 1)\n");
        scanf("%d", &continuar);
        getchar();

        if (continuar != 1){
            break;
        }
        
        char resposta;
        printf("\nGostaria de adicionar as informações no inicio(i) ou no final(f)?\n");
        scanf(" %c", &resposta);
        getchar();

        if (resposta == 'i'){
            for (int j = i+1; j > 0; j--){
                strcpy(objeto[j].nome, objeto[j-1].nome);
                objeto[j].tamanho = objeto[j-1].tamanho;
            }
            printf("Insira o nome do objeto %d:\n", i+1);
            fgets(objeto[0].nome, sizeof(objeto[0].nome), stdin);
            printf("Insira o tamanho do objeto %d:\n", i+1);
            scanf("%d", &objeto[0].tamanho);
            getchar();

        }
        else if (resposta == 'f'){
            printf("Insira o nome do objeto %d:\n", i+1);
            fgets(objeto[i].nome, sizeof(objeto[i].nome), stdin);
            printf("Insira o tamanho do objeto %d:\n", i+1);
            scanf("%d", &objeto[i].tamanho);
            getchar();
        }
        else{
            printf("Insira uma resposta valida!!");
        }
        
        i++;
    }

    for (int j = 0; j < i; j++){
        printf("nome do objeto %d: %s", j+1, objeto[j].nome);
        printf("Tamanho do objeto %d: %d\n", j+1, objeto[j].tamanho);
    }


    return 0;
}