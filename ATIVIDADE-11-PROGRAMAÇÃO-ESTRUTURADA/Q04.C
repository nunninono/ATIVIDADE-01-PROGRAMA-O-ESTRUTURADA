#include <stdio.h>

int main()
{
    int i = 4;
    int j = 4;
    int matriz[i][i];
    int maior = 0;
    int maiorlinha = 0;
    int maiorcoluna = 0;
    
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            scanf("%d", &matriz[i][j]);
            if (maior < matriz[i][j]){
                maior = matriz[i][j];
                maiorlinha = i;
                maiorcoluna = j;
            }
        }
    }
    
    printf("\n");
    
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\n O maior valor na matriz se localiza na linha %d e na coluna %d", maiorlinha, maiorcoluna);
    

    return 0;
}
