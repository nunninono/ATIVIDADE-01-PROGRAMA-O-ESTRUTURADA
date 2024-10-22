#include <stdio.h>
#include <stdlib.h>

int main(){
    char ch;
    printf("Digite um simbolo de pontuação: ");
    ch = getchar();
    switch (ch){
        case '.': printf("Ponto. \n"); break;
        case ',': printf("Virgula. \n"); break;
        case ':': printf("Dois pontos. \n"); break;
        case ';': printf("Ponto e Virgula. \n"); break;
        default : printf("Não é pontuação.\n"); break;
    }
    return 0;
}
