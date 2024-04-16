#include <stdio.h>

int main()
{
    int i = 4;
    int j = 4;
    int matriz[i][j];
    int contador = 0;
    
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &matriz[i][j]);
        }   
    }
    
    printf("\n");
    
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (matriz[i][j] == 10)
            {
                contador += 1;
            }
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("A quantidade de termos 10 na matriz foi: %d", contador);
    return 0;
}