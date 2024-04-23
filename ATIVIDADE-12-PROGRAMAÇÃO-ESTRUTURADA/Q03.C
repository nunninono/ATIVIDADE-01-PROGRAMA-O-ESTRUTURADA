#include <stdio.h>

int main()
{
    char frase1[100];
    char frase2[100];
    int termo = 0;
    int validador = 0;
    
    printf("Digite a primeira frase: \n");
    fgets(frase1, 100, stdin);
    printf("\nDigite a segunda frase: \n");
    fgets(frase2, 100, stdin);

    while(frase1[termo] != '\0' || frase2[termo] != '\0'){
        if (frase1[termo] == frase2[termo]){
            termo += 1;
        }
        else{
            validador = 1;
            break;
        }
    }
    if(validador == 1){
        printf("\nAs duas strings são diferentes!! ");
    }
    else{
        printf("\nAs duas strings são iguais! ");
    }
    return 0;
}
