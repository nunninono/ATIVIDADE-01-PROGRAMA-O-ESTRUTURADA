#include <stdio.h>

int soma(int num)
{
    int resultado;
    if (num == 1)
    {
        return 1;
    }
    else
    {
        resultado = num + soma(num - 1);
    }
    return resultado;
}

int main()
{
    int num, resultado;
    printf("Insira um numero inteiro: \n");
    scanf("%d",&num);
    resultado = soma(num);
    printf("A soma de todos os numeros de %d até 1: %d\n", num, resultado);

    return 0;
}
