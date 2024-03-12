#include <stdio.h>


int trocar(int *A, int *B){
    int dummy = *A;
    *A = *B;
    *B = dummy;
    
    return 0;
}

int main(){
    int A, B;
    printf("Insira o valor de A: \n");
    scanf("%d",&A);
    printf("Insira o valor de B: \n");
    scanf("%d",&B);
    trocar(&A, &B);
    printf("Valor de A trocado: %d\n", A);
    printf("Valor de B trocado: %d\n", B);
    
    return 0;
}
