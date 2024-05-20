#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* vetor = malloc(1 * sizeof(int));
    int numero;
    int cont = 0;
    printf("Insira um numero a ser adicionado ao vetor(negativo para parar):\n");
    
    while(1){
        scanf("%d", &numero);
        if (numero >= 0){
            vetor = realloc(vetor, (cont + 1) * sizeof(int));
            vetor[cont] = numero;
            cont++;
        }
        else{
            break;
        }
    }
    
    printf("\n");
    
    for (int i = 0; i < cont; i++){
        printf("%d ", vetor[i]);
    }
    
    free(vetor);
    vetor = NULL;
    return 0;
}