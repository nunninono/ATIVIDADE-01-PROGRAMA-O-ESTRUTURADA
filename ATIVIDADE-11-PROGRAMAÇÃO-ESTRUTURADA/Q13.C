#include <stdio.h>

int main()
{
    int i = 4;
    int j = 4;
    int matriz[i][j];
    
    printf("Insira numeros de 1 a 20 para matrz 4x4: \n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\n");
    
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if (i - j < 0){
                printf("0 ");
            }
            else{
                printf("%d ", matriz[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}