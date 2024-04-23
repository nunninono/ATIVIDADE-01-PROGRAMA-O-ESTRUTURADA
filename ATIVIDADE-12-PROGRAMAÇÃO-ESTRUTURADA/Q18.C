#include <stdio.h>

int main() {
    char frase[100];
    char letra;
    char subs;
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    
    printf("Qual letra vai ser substituida? \n");
    scanf(" %c", &letra); 
    
    printf("O que vai ficar no lugar? \n");
    scanf(" %c", &subs); 
    
    for(int i = 0; i < sizeof(frase); i++) {
        if (frase[i] == letra) {
            frase[i] = subs; 
        }
        printf("%c", frase[i]);
    }

    return 0;
}
