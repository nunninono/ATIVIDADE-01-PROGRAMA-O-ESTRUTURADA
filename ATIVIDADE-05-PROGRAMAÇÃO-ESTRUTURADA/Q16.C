#include <stdio.h>

int main(){
    float nota;
    int aprovados = 0;
    int cont;
    do{
        printf("Insira a nota do aluno: ");
        scanf("%f",&nota);
        if (nota >= 7){
            aprovados +=1;
        }
        cont += 1;
    }
    while(cont < 5);
    printf("No total tiveram %d alunos aprovados por media!!",aprovados);
    return 0;
}
