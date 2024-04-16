#include <stdio.h>

int main()
{
    int i = 3;
    int j = 3;
    int soma = 0;
    int matriz[i][j];
    
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            scanf ("%d", &matriz[i][j]);
            if (i - j > 0){
                soma += matriz[i][j];
            }
        }
    }

    printf("\n");
    
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("A soma dos valores abaixo da diagonal principal é: %d", soma);
    return 0;
}
