#include <stdio.h>

int main(){
    char c = 'a';
    char *pc = &c;
    
    printf("a) O endereço de memoria de c é: %p\n", &c);
    printf("b) O valor que pc armazena é: %c\n", *pc);
    printf("c) O endereço de pc é: %p\n", &pc);

    return 0;
}