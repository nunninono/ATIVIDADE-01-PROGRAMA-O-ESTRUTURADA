#include <stdio.h>

int main(){
    int num;
    printf("Insira um numero(1 a 7): ");
    scanf("%d",&num);
    switch(num){
        case 1:
            printf("É domingo!");
            break;
        case 2:
            printf("É segunda!");
            break;
        case 3:
            printf("É terça!");
            break;
        case 4:
            printf("É quarta!");
            break;
        case 5:
            printf("É quinta!");
            break;
        case 6:
            printf("É sexta!");
            break;
        case 7:
            printf("É sábado!");
            break;
    }

    return 0;
}
