#include <stdio.h>

int main(){
    int i = 0;
    float notas;
    do{
        printf("insira uma nota: ");
        scanf("%f",&notas);
        i += 1;
        if (notas >= 7){
            printf("Aluno %d APROVADO!!\n", i);
        }
    }
     while (i < 5);
    return 0;
}
