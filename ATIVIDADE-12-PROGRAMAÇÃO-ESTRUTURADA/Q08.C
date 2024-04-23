#include <stdio.h>
#include <string.h>

int main()
{
    char numeros[20];
    int cont = 0;
    
    printf("Insira um numero binario: ");
    fgets(numeros, sizeof(numeros), stdin);
    
    for(int i = 0; i < sizeof(numeros); i++){
        if(numeros[i] == '0'){
            numeros[i] = '1';
        }
        printf("%c", numeros[i]);
    }
    return 0;
}
