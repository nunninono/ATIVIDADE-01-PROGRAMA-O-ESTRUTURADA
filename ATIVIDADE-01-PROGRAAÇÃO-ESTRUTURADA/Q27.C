#include<stdio.h>

int main(){
    char cidade[16], estado[16];
    printf("Em que estado voce mora? ");
    scanf("%s",estado);
    printf("Em que cidade voce mora? ");
    scanf("%s",cidade);
    printf("Voce mora em %s, %s",estado,cidade);
    return 0;
}
