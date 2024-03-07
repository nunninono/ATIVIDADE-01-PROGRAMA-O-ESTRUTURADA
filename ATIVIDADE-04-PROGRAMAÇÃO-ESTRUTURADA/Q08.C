#include <stdio.h>
#include <string.h>

int main(){
    char nome1[12], nome2[12];
    int letras1, letras2;
    printf("Digite seu nome(sem espaços): ");
    scanf("%s",nome1);
    printf("Digite outro nome(sem espaços): ");
    scanf("%s",nome2);
    letras1 = strlen(nome1);
    letras2 = strlen(nome2);
    if (letras1 > letras2){
        printf("%s é um nome maior que %s", nome1, nome2);
    }
    else if (letras1 < letras2){
        printf("%s é um nome maior que %s", nome2, nome1);
    }
    else{
        printf("Os dois nomes tem a mesma quantidade de letras!!");
    }
   return 0;
}