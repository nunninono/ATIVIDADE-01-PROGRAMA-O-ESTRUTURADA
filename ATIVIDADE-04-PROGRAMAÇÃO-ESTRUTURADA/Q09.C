#include <stdio.h>
#include <stdbool.h>

int main(){
    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    switch (letra) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        printf("A letra escolhida é uma VOGAL!!\n");
        break;
    default:
        printf("A letra escolhida é uma CONSOANTE!!");
        break;
    }
    return 0;
}
