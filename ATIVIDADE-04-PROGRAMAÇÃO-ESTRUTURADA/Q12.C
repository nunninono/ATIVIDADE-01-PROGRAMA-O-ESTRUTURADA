#include <stdio.h>

int main(){
    int mes;
    printf("Insira um numero de 1 a 12: ");
    scanf("%d",&mes);
    switch(mes){
        case 1:
            printf("%d é referente ao mes de JANEIRO", mes);
            break;
        case 2:
            printf("%d é referente ao mes de FEVEREIRO", mes);   
            break;
        case 3:
            printf("%d é referente ao mes de MARÇO", mes);
            break;
        case 4:
            printf("%d é referente ao mes de ABRIL", mes);
            break;
        case 5:
            printf("%d é referente ao mes de MAIO", mes);
            break;
        case 6:
            printf("%d é referente ao mes de JUNHO", mes);
            break;
        case 7:
            printf("%d é referente ao mes de JULHO", mes);
            break;
        case 8:
            printf("%d é referente ao mes de AGOSTO", mes);
            break;
        case 9:
            printf("%d é referente ao mes de SETEMBRO", mes);
            break;
        case 10:
            printf("%d é referente ao mes de OUTUBRO", mes);
            break;
        case 11:
            printf("%d é referente ao mes de NOVEMBRO", mes);
            break;
        case 12:
            printf("%d é referente ao mes de DEZEMBRO", mes);
            break;
    }
    return 0;
}