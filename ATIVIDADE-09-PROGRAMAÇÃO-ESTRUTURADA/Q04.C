#include <stdio.h>

int main()
{
    int vetor[5];
    int i, menor, maior;
    int coringa = 100000;
    for (i = 0; i < 5; i++)
    {
        printf("Insira um numero para posição %d do vetor(0 até 4):\n ", i);
        scanf("%d", &vetor[i]);
        
        if (vetor[i] > maior)
        {
            maior = i;
        }
        if (vetor[i] < coringa)
        {
            coringa = vetor[i];
            menor = i;
        }
    }
    printf("A posição no vetor do elemento de maior valor é: %d\n", maior);
    printf("A posição no vetor do elemento de menor valor é: %d\n", menor);
    return 0;
}