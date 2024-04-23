#include <stdio.h>
#include <string.h>

int main()
{
    char numeros[20];
    int cont = 0;
    
    printf("Insira um numero binario: ");
    fgets(numeros, sizeof(numeros), stdin);
    
    for(int i = 0; i < sizeof(numeros); i++){
        if(numeros[i] == '1'){
            cont++;
        }
    }
    
    printf("O numero 1 aparece %d vezes", cont);
    return 0;
}