#include <stdio.h>

int main() {
    int num;
    int cont = 1;
    
    printf("Insira um numero positivo: ");
    scanf("%d", &num);

    do {
        if (num % cont == 0) {
            printf("%d é um divisor para %d\n", cont, num);
            cont += 1;
        } 
        else{
            cont += 1;
        }
    } while (num >= cont);

    return 0;
}