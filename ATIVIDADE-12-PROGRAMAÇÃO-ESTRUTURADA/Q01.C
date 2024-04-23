#include <stdio.h>

int main()
{
    char frase[100];
    
    printf("Escreva uma frase: \n");
    fgets(frase, 100, stdin);
    printf("\n%s", frase);
    return 0;
}

