#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    char cidade[16];
    printf("Digite o nome da sua cidade: ");
    scanf("%s",cidade);
    if (cidade[0] == 'S' || cidade[0] == 's'){
        printf("A sua cidade começa com a letra S!!");
    }
    else{
        printf("%s não começa com a letra S!!!",cidade);
    }
    return 0;
}
