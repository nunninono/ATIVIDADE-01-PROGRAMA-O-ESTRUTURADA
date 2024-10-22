#include <stdio.h>

struct Aluno{
    char nome[20];
    int matricula;
    char curso[20];
};

int main(){
    struct Aluno alunos[5];

    for (int i = 0; i < 5; i++){
        printf("Insira o nome do aluno %d:\n", i+1);
        scanf("%s", alunos[i].nome);
        printf("Insira o numero de matricula do aluno %d:\n", i+1);
        scanf("%d", &alunos[i].matricula);
        printf("Insira o curso do aluno %d:\n", i+1);
        scanf("%s", alunos[i].curso);
    }

    for (int i = 0; i < 5; i++){
        printf("aluno %d: %s, %d, %s\n", i+1, alunos[i].nome, alunos[i].matricula, alunos[i].curso);
    }

    return 0;
}