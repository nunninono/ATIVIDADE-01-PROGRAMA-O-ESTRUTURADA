#include <stdio.h>

int main()
{
    int vetor[10];
    int i;
    int maior = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Insira o elemento %d do vetor(10 no total):\n", i);
        scanf("%d",&vetor[i]);
        if (vetor[i] >= maior)
        {
            maior = vetor[i];    
        }
    }
    printf("Dentre todos os numeros do vetor, o maior foi o %d!!", maior);
    return 0;
}
