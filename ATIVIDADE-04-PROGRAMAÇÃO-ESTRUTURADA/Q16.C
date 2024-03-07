#include <stdio.h>

int main(){
    int num;
    printf("Insira um numero(1 a 5): ");
    scanf("%d",&num);
    switch (num){
        case 1:
            printf("Muito Bom");
            break;
        case 2:
            printf("Bom");
            break;
        case 3:
            printf("Regular");
            break;
        case 4:
            printf("Insuficiente");
            break;
        case 5:
            printf("Muito Insuficiente");
            break;
    }

    return 0;
}

