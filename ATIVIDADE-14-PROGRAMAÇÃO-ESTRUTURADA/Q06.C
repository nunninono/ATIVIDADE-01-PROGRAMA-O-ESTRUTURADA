#include <stdio.h>
#include <string.h>

struct Aluno{
    int matricula;
    char nome[20];
    int codigo_da_diciplina;
    float nota1;
    float nota2;
};

int main(){
    struct Aluno alunos[10];
    float media;

    for (int i = 0; i < 10; i++){
        printf("Insira o numero de matricula do aluno %d:\n", i+1);
        scanf("%d", &alunos[i].matricula);
        printf("Insira o nome do aluno %d:\n", i+1);
        scanf("%s", alunos[i].nome);
        printf("insira o codigo de disciplina das provas 1 e 2:\n");
        scanf("%d", &alunos[i].codigo_da_diciplina);
        printf("Insira a nota 1 do aluno %d:\n", i+1);
        scanf("%f", &alunos[i].nota1);
        printf("Inisra a nota 2 do aluno %d:\n", i+1);
        scanf("%f", &alunos[i].nota2);
    }

    printf("\n");

    for (int i = 0; i < 10; i++){
        media = (alunos[i].nota1 + (alunos[i].nota2 * 2)) / 3;
        printf("%s media: %.2f\n", alunos[i].nome, media);
    }

    return 0;
}