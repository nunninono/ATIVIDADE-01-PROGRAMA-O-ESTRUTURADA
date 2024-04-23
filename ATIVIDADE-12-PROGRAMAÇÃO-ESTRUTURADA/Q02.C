#include <stdio.h>

int main()
{
    char str[100];
    int tamanho = 0;
    int compair = 0;
    int a = 0;
    
    printf("Insira uma frase: \n");
    fgets(str, 100, stdin);
    
    while(str[tamanho] != '\0'){
        tamanho++;
    }
    
    printf("%d", tamanho - 1);

    return 0;
}
