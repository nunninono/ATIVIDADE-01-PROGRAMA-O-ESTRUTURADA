#include <stdio.h>

int contagem(int num, int contador)
{
    if (contador > num)
    {
        return 0;
    }
    else
    {
        printf("%d\n", contador);
        return contagem(num, contador + 1);
    }
}

int main()
{
    int num;
    printf("Insira um numero inteiro:\n");
    scanf("%d", &num);
    printf("A sequencia dos numeros de forma crescente é:\n");
    contagem(num, 0);
    return 0;
}