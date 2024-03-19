#include <stdio.h>

int main()
{
    int vetor[10];
    int i, j;
    
    for (i = 0; i < 10; i++)
    {
        printf("Insira o termo %d do vetor(0 até 9):\n ", i);
        scanf("%d", &vetor[i]);
    }
    
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
            {
                if (vetor[i] == vetor[j])
                {
                    printf("Os elementos %d e %d são iguais.\n", vetor[i], vetor[j]);
                }
            }
    }
    
    return 0;
}