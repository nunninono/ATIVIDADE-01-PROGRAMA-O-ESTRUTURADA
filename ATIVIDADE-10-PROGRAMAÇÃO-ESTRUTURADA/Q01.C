#include <stdio.h>

int busca(int vetor[], int inicio, int fim, int chave)
{
    int iteracoes = 1;
    do
    {
        int meio = (inicio + fim) / 2;
        if (vetor[meio] == chave)
        {
            printf("\ntotal de %d iteracoes\n", iteracoes);
            return meio;
        }
        if (chave < vetor[meio])
        {
            fim = meio - 1;
            iteracoes += 1;
        }
        else
        {
            inicio = meio + 1;
            iteracoes += 1;
        }
    }
    while(fim >= inicio);
    
    printf("\ntotal de %d iteracoes\n", iteracoes);
    return -1;
}

int main()
{
    int vetor[15] = {2, 3, 4, 6, 7, 8, 9, 11, 14, 15, 17, 18, 19, 21, 25};
    int chave, resultado, iteracoes;
    
    printf("Qual o numero a ser procurado? \n" );
    scanf("%d", &chave);
    
    resultado = busca(vetor, 0, 14, chave);
    printf("%d", resultado);
    
    return 0;
}