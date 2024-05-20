#include <stdio.h>
#include <stdlib.h>

int main(){
    int r, c;
    
    printf("Numero de linhas:\n");
    scanf("%d", &r);
    printf("Numero de colunas:\n");
    scanf("%d", &c);
    
    float* matriz[r];
    
    for(int i = 0; i < r; i++){
        matriz[i] = malloc(c * sizeof(float));
    }
    
    printf("Insira os termos da matriz:\n");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            scanf("%f", &matriz[i][j]);
        }
    }
    
    printf("\n");
    
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("%f ", matriz[i][j]);
        }
        printf("\n");
    }
    
    free(matriz[r]);
    matriz[r] = NULL;
}
