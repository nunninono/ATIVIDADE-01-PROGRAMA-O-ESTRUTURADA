#include <stdio.h>
#include <stdlib.h>

int buscarvalor(int** matriz, int r, int c, int valor){
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if (matriz[i][j] == valor){
                return 1;
            }
        }
    }
    return 0;
}


int main()
{
    int r, c, valor;
    printf("Numero de linhas:\n");
    scanf("%d", &r);
    printf("Numero de colunas:\n");
    scanf("%d", &c);
    printf("Insira os elementos:\n");
    
    int* matriz[r];
    for (int i = 0; i < r; i++){
        matriz[i] = malloc(c * sizeof(int));
    }
    
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\nQual valor voce quer buscar na matriz?\n");
    scanf("%d", &valor);
    
    if (buscarvalor(matriz, r, c, valor)) {
        printf("Valor encontrado\n");
    } else {
        printf("Valor não encontrado\n");
    }
    
    free(matriz[r]);
    matriz[r] = NULL;
    return 0;
}