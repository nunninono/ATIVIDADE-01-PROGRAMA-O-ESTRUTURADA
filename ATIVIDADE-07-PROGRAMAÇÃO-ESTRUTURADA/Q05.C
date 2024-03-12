#include <stdio.h>

int SomaDobro(int *A, int *B){
    int soma;
    *A *= 2;
    *B *= 2;
    soma = *A + *B;
    return soma;
}

int main(){
    int A, B;
    printf("Insira o valor de A: \n");
    scanf("%d",&A);
    printf("Insira o valor de B: \n");
    scanf("%d",&B);
    int soma = SomaDobro(&A, &B);
    printf("A soma do dobro dos valores é: %d\n", soma);

    return 0;
}