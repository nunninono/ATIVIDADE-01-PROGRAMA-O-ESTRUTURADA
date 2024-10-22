#include <stdio.h>
#include <stdlib.h>

int main(){
    int* numeros = malloc(5 * sizeof(int));

    printf("Insira 5 numeros:\n");
    for (int i = 0; i < 5; i++){
        scanf("%d", &numeros[i]);
    }
    for (int i = 0; i < 5; i++){
        printf("%d ", numeros[i]);  
    }
    free(numeros);
    numeros = NULL;

    return 0;
}