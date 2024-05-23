#include <stdio.h>

int main(){
    char busca[26];
    
    while(1){
        printf("\n\nInsira o nome da receita que voce quer procurar:\n");
        fgets(busca, sizeof(busca), stdin);

        if (busca[0] != ' '){
            for (int i = 0; i < 5; i++){
                printf("asasd");
            }
        }
        else{
            break;
        }
    }
}