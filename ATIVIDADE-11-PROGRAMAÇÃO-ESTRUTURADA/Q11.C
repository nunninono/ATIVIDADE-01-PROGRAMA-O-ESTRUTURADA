#include <stdio.h>

int main()
{
    int i = 3;
    int j = 3;
    int matriz[i][j];
    int soma = 0;
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\n");
    
    for(i = 0; i < 3; i++){
        soma += matriz[i][2 - i];
    }


    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("A soma dos elementos da diagonal secundária é: %d", soma);
    return 0;
}
