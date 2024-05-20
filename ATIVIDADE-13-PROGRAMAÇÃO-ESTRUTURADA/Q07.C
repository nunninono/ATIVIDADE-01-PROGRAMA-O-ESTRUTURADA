#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* vetor = (int*) calloc(1500, sizeof(int));
    int cont = 0;
    
    for (int i = 0; i < 1500; i++){
        
        // a
        if (vetor[i] == 0){
            cont++;
        }
        
        //b
        vetor[i] = i;
    }
    printf("%d ", cont);
    
    //c
    for (int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }
    for (int i = 1490; i < 1500; i++){
    printf("%d ", vetor[i]);
    }
    
    
    free(vetor);
    vetor = NULL;
    return 0;
}