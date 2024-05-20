#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* vetor = malloc(10 * sizeof(int));
    int i = 0;   
    int num;
    int N = 10;
    
    printf("Insira os numeros do vetor:\n");
    
    while(1){
        scanf("%d", &num);
        if (num == 0){
            break;
        }
        
        if (i == N){
            int novoN = N + 10;
            int* novovetor = malloc(novoN * sizeof(int));
            
            for (int i = 0; i < novoN; i++){
                novovetor[i] = vetor[i];
            }
            
            N = novoN;
            vetor = novovetor;
        }
        
        vetor[i] = num;
        i++;
    }
    
    printf("Numeros inputados:\n");
    for(int i = 0; i < N; i++){
        printf("%d ", vetor[i]);
    }

    free(vetor);
    vetor = NULL;
    return 0;
}