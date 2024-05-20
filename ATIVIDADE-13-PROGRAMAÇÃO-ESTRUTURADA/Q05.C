#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, X;
    int mult = 0;
    
    scanf("%d", &N);
    printf("\n");
    
    int* vetor = malloc(N * sizeof(int));
    
    for (int i = 0; i < N; i++){
        scanf("%d", &vetor[i]);
    }
    
    printf("\n");
    scanf("%d", &X);
    
    for (int i = 0; i < N; i++){
        if (vetor[i] % X == 0){
            mult++;
        }
    }
    
    printf("o numero de numeros divisiveis por %d é %d", X, mult);
    
    free(vetor);
    vetor = NULL;
    return 0;
}