#include <stdio.h>
#include <string.h>

int main()
{
    char nome[20];
    int idade;
    char sexo[20];
    
    printf("Insira o nome da pessoa: \n");
    fgets(nome, 20, stdin);
    printf("Insira do sexo da pessoa(feminino ou masculino): \n");
    fgets(sexo, 20, stdin);
    printf("Insira a idade da pessoa: \n");
    scanf("%d", &idade);
    
    if (strcmp(sexo, "feminino\n") == 0 && idade < 25){
        printf("\n%s ACEITA", nome);
    }
    else{
        printf("\n%s NÃO ACEITA", nome);
    }

    return 0;
}