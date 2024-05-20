#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanho;
    scanf("%d",&tamanho);
    
    int* arr = malloc(tamanho * sizeof(int));
    
    for (int i = 0; i < tamanho; i++){
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < tamanho; i++){
        printf("%d ", arr[i]);
    }
    
    free(arr);
    arr = NULL;
    return 0;
}