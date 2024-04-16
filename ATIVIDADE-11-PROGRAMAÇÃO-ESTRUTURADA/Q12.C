#include <stdio.h>

int main()
{
    int i = 3;
    int j = 3;
    int matriz[i][j];
    
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            scanf ("%d", &matriz[i][j]);
        }
    }

    printf("\n A TRANSPOSTA É \n");
    
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}