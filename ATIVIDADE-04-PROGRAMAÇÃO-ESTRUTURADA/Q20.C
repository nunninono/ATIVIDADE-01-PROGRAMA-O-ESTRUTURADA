#include <stdio.h>

int main(){
    char estado[12];
    printf("Qual seu estado civil? ");
    scanf("%s",estado);
    switch(estado[0]){
        case 'c':
        case 'C':
            printf("Voce é Casado!!");
            break;
        case 's':
        case 'S':
            printf("Voce é Solteiro!!");
            break;
        case 'd':
        case 'D':
            printf("Voce é Divorciado!!");
            break;
        case 'v':
        case 'V':
            printf("Voce é Viúvo!!");
            break;
    }
    return 0;
}
