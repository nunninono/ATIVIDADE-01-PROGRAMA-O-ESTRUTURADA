#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[20];
    int i = 0;
    
    printf("Insira uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    
    for(i = strlen(palavra) - 1; i >= 0; i--){
        printf("%c", palavra[i]);
    }
    return 0;
}