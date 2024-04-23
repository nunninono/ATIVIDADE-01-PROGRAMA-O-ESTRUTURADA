#include <stdio.h>
#include <ctype.h>

int main() {
    char frase[1000];
    int espacos = 0;
    
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    for(int i = 0; frase[i] != '\0'; i++) {
        if(isspace(frase[i])) {
            espacos++;
        }
    }

    printf("Número de espaços em branco na frase: %d\n", espacos);

    return 0;
}
