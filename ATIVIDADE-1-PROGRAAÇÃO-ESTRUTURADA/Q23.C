#include<stdio.h>

int main(){
    float num;
    printf("Insira um numero decimal: ");
    scanf("%f",&num);
    printf("%.2f convertido para um numero inteiro é %.0f",num, num);
    return 0;
}
