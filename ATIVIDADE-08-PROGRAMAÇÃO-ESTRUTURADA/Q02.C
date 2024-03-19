#include <stdio.h>

int fatorial(int num)
{
    int resultado;
    if (num == 0)
    {
        return 1;
    }
    else
    {
        resultado = num * fatorial(num - 1);
    }
    return resultado;
}

int main()
{
    int num, resultado;
    printf("Insira um numero inteiro: \n");
    scanf("%d",&num);
    resultado = fatorial(num);
    printf("O fatorial de %d é: %d\n", num, resultado);

    return 0;
}