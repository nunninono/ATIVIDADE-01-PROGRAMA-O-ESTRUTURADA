#include <stdio.h>
#include <ctype.h>

int main() {
    char cadeia[100];
    
    printf("Digite uma frase: ");
    fgets(cadeia, sizeof(cadeia), stdin);

    printf("Frase com letras minusculas: ");
    for(int i = 0; cadeia[i] != '\0'; i++) {
        if(isupper(cadeia[i])) {
            printf("%c", tolower(cadeia[i]));
        } else {
            printf("%c", cadeia[i]);
        }
    }

    return 0;
}