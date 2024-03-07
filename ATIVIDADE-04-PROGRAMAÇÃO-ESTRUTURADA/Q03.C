#include <stdio.h>

int main()
{
    int num;
    printf("Escolha um numero inteiro: ");
    scanf("%d", &num);
    if(num > 0){
        printf("%d é um numero positivo!!", num);
    }
    else if(num == 0){
        printf("%d é igual a zero!!", num);
    }
    else{
        printf("%d é um numero negativo!!", num);
    }
    
    return 0;
}
