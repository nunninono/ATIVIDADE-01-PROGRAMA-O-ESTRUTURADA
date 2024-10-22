#include <stdio.h>

int main()
{
    int vetor[10];
    int i, maior, posicao;
    
    for (i = 0; i < 10; i++)
    {
        printf("Insira o valor numero %d do vetor(até 10):\n", i);
        scanf("%d", &vetor[i]);
        if (vetor[i] > maior)
        {
            maior = vetor[i];
            posicao = i;
        }
    }
    printf("O maior valor dentro dos inseridos no vetor é: %d\n", maior);
    printf("E está na posição %d do vetor(começa do 0)", posicao);

    return 0;
}