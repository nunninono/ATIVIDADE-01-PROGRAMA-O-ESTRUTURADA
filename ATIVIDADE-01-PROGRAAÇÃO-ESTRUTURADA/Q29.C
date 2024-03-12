#include <stdio.h>

int main(){
    float preço;
    char produto[16];
    printf("diga o nome de um produto: ");
    scanf("%s",produto);
    printf("diga o preço do produto: ");
    scanf("%f",&preço);
    printf("%s %.2f",produto, preço);
    return 0;
}
