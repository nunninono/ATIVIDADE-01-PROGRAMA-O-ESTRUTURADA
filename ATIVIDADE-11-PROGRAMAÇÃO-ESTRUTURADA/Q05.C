#include <stdio.h>

int main()
{
    int x;
    int i = 5;
    int j = 5;
    int matrizlinha = 0;
    int matrizcoluna = 0;
    int achado = 0;
    int matriz[i][j];
    

    printf("Informe o Valor a ser procurado(x): \n");
    scanf("%d", &x);
    printf("\n");

    for (i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            scanf("%d", &matriz[i][j]);
            if (x == matriz[i][j]){
                matrizlinha = i;
                matrizcoluna = j;
                achado = 1;
            }
        }
    }
    
    printf("\n");
    
    for (i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    if(achado == 1){
        printf("\nO valor de x foi encontrado na linha %d e na coluna %d", matrizlinha, matrizcoluna);
    }
    else{
        printf("\nNão achado");
    }
    
    return 0;
}
