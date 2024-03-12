#include <stdio.h>

int main(){
    int inteiro = 5;
    float real = 2.5;
    char caractere = 'a';
    
    printf("Antes de modificar!!\n\n");
    printf("inteiro: %d\n", inteiro);
    printf("real: %f\n", real);
    printf("caractere: %c\n", caractere);
    printf("==============================\n");
    
    int *p_inteiro = &inteiro;
    float *p_real = &real;
    char *p_caractere = &caractere;
    
    *p_inteiro = 10;
    *p_real = 5.0;
    *p_caractere = 'c';
    
    printf("Depois de modificar!!\n\n");
    printf("inteiro: %d\n", inteiro);
    printf("real: %f\n", real);
    printf("caractere: %c\n", caractere);
    return 0;
}