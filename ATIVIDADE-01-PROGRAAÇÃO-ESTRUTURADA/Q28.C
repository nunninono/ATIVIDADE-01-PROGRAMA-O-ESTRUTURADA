#include <stdio.h>

int main(){
    int num;
    char palavra[12];
    printf("diga um numero: ");
    scanf("%d",&num);
    printf("diga uma palavra: ");
    scanf("%s",palavra);
    printf("%d %s",num, palavra);
    return 0;
}
