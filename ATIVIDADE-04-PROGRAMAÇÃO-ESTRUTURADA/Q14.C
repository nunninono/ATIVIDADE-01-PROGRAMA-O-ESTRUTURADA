#include <stdio.h>

int main(){
    int num;
    printf("Insira um numero: ");
    scanf("%d",&num);
    if (num%3 == 0 && num%5 == 0){
        printf("%d é divisivel por 3 e 5!!", num);
    }
    return 0;
}

