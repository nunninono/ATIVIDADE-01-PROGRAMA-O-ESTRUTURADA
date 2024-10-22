#include <stdio.h>

int main()
{
    int vetor[10];
    int i, menor = 1000000;
    
    for (i = 0; i < 10; i++)
    {
        printf("Insira o valor numero %d do vetor(até 10):\n", i);
        scanf("%d", &vetor[i]);
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
        
    }
    printf("O menor valor dentro dos inseridos no vetor é: %d", menor);
    
    return 0;
}
