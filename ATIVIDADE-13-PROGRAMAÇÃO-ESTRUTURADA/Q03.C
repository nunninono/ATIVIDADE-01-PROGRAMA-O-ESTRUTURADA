#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
       
    scanf("%d", &i);
    printf("\n");
    
    int* vetor = malloc(i * sizeof(int));
    int par = 0;
    int impar = 0;
    
    for (int j = 0; j < i; j++){
        scanf("%d", &vetor[j]);
        if (vetor[j] % 2 == 0){
            par++;
        }
        else{
            impar++;
        }
    }
    
    printf("\nO vetor possui %d impares e %d pares.", impar, par);
    free(vetor);
    vetor = NULL;

    return 0;
}
