#include <stdio.h>

struct Alunos{
    char nome[20];
    int matricula;
    float media_final;
};

int main(){
    struct Alunos dados[10];
    struct Alunos aprovados[10];
    struct Alunos reprovados[10];
    int j = 0;
    int k = 0;

    for (int i = 0; i < 10; i++){
        printf("Insira o nome do alumo %d:\n", i+1);
        scanf("%s", dados[i].nome);
        printf("Insira o numero de matricula do aluno %d:\n", i+1);
        scanf("%d", &dados[i].matricula);
        printf("Insira a media final do aluno %d:\n", i+1);
        scanf("%f", &dados[i].media_final);
        if (dados[i].media_final > 5){
            aprovados[j] = dados[i];
            j++;
        }
        else{
            reprovados[k] = dados[i];
            k++;
        }
    }

    for (int i = 0; i < j; i++){
        printf("Nome: %s, matricula: %d, media final: %.2f\n", aprovados[i].nome, aprovados[i].matricula, aprovados[i].media_final);
    }
    printf("\n");
    for (int i = 0; i < k; i++){
        printf("Nome: %s, matricula: %d, media final: %.2f\n", reprovados[i].nome, reprovados[i].matricula, reprovados[i].media_final);
    }
    
    return 0;
}