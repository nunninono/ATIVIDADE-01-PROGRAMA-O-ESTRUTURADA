#include <stdio.h>
#include <string.h>

struct Aluno{
    int matricula;
    char nome[20];
    float nota1;
    float nota2;
    float nota3;
    char resultado[10];
};

int main(){
    struct Aluno alunos[5];
    float maiornota = 0;
    float mediageral;
    float maiormedia = 0;
    float menormedia = 10;
    char alunomaiornota[20];
    char alunomaiormedia[20];
    char alunomenormedia[20];

    for (int i = 0; i < 5; i++){
        printf("Insira a matricula do aluno %d:\n", i+1);
        scanf("%d", &alunos[i].matricula);
        printf("Insira o nome do aluno %d:\n", i+1);
        scanf("%s", alunos[i].nome);
        printf("Insira a nota 1 do aluno %d:\n", i+1);
        scanf("%f", &alunos[i].nota1);
        printf("Insira a nota 2 do aluno %d:\n", i+1);
        scanf("%f", &alunos[i].nota2);
        printf("Insira a nota 3 do aluno %d:\n", i+1);
        scanf("%f", &alunos[i].nota3);

        if (maiornota < alunos[i].nota1){
            maiornota = alunos[i].nota1;
            strcpy(alunomaiornota, alunos[i].nome);
        }
        mediageral = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        if (mediageral > maiormedia){
            maiormedia = mediageral;
            strcpy(alunomaiormedia, alunos[i].nome);
        }
        if (mediageral < menormedia){
            menormedia = mediageral;
            strcpy(alunomenormedia, alunos[i].nome);
        }
        if (mediageral > 6){
            strcpy(alunos[i].resultado, "APROVADO");
        }
        if (mediageral < 6){
            strcpy(alunos[i].resultado, "REPROVADO");
        }

    
    }    


    printf("A MAIOR NOTA foi de %s com %.2f.\n", alunomaiornota, maiornota);
    printf("O aluno com MAIOR MEDIA foi %s com %.2f.\n", alunomaiormedia, maiormedia);
    printf("O aluno com MENOR MEDIA foi %s com %.2f.\n", alunomenormedia, menormedia);
    printf("RESULTADOS:\n");
    printf("%s: %s.\n", alunos[0].nome, alunos[0].resultado);
    printf("%s: %s.\n", alunos[1].nome, alunos[1].resultado);
    printf("%s: %s.\n", alunos[2].nome, alunos[2].resultado);
    printf("%s: %s.\n", alunos[3].nome, alunos[3].resultado);
    printf("%s: %s.\n", alunos[4].nome, alunos[4].resultado);

    return 0;
}