#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[100];
    char substituto;
    int vogais = 0;
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    printf("Digite o caractere para substituir as vogais: ");
    scanf(" %c", &substituto);

    printf("Palavra modificada: ");
    for(int i = 0; i < strlen(palavra); i++) {
        char current = tolower(palavra[i]); // Convertendo para minúsculas para facilitar a comparação
        if(current == 'a' || current == 'e' || current == 'i' || current == 'o' || current == 'u') {
            vogais++;
            printf("%c", substituto);
        } else {
            printf("%c", palavra[i]);
        }
    }
    
    printf("\nTotal de vogais na palavra: %d\n", vogais);

    return 0;
}