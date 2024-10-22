#include <stdio.h>

int fibonacci(int num)
{
    int resultado;
    if (num == 1 || num == 0)
    {
        return num;
    }
    else
    {
        resultado = fibonacci(num - 1) + fibonacci(num - 2);
    }
    return resultado;
}

int main()
{
    int num, resultado;
    printf("Insira um numero inteiro:\n ");
    scanf("%d",&num);
    resultado = fibonacci(num);
    printf("O valor do %d termo da sequencia de fibonacci é: %d",num, resultado);

    return 0;
}
