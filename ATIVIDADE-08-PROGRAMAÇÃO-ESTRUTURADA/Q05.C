#include <stdio.h>

int contagem(int num) 
{
    if (num < 0) 
    {
        return 0;
    } 
    else 
    {
        printf("%d\n", num);
        contagem(num - 1);
    }
}

int main() 
{
    int num;
    printf("Insira um numero inteiro:\n");
    scanf("%d", &num);
    printf("A sequencia dos numeros de forma decrescente é:\n");
    contagem(num);
    return 0;
}