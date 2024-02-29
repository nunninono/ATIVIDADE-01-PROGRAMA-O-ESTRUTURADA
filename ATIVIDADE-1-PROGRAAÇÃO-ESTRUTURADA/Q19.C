#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char estado[12];
    printf("Insira seu estado civil: ");
    scanf("%s",estado);
    if (strcmp(estado,"solteiro") == 0 || strcmp(estado,"solteira") == 0){
        printf("Voce está solteiro(a)!!");
    }
    else if (strcmp(estado,"casado") == 0 || strcmp(estado,"casada") == 0){
        printf("voce está casado(a)!!");
    }
    else if (strcmp(estado,"divorciado") == 0 || strcmp(estado,"divorciada") == 0){
        printf("voce está divorciado(a)!!");
    }
    else if (strcmp(estado,"separado") == 0 || strcmp(estado,"separada") == 0){
        printf("voce está separado(a)!!");
    }
    else if (strcmp(estado,"viúvo") == 0 || strcmp(estado,"viúva") == 0){
        printf("voce está viúvo(a)!!");
    }
    return 0;
}
