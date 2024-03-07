#include <stdio.h>

int main(){
    int idade;
    printf("Insira sua idade: ");   
    scanf("%d",&idade);
    if (idade == 0 || idade == 1){
        printf("Idade de bebê!");
    }
    else if(idade > 1 && idade <= 12){
        printf("Idade de criança!!");
    }
    else if(idade >= 13 && idade <= 18){
        printf("Idade de adolescente!!");
    }
    else{
        printf("Idade de adulto");
    }
    return 0;
}
