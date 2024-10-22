#include <stdio.h>

struct Estoque{
    int codigo;
    char nome[16];
    float preco;
    int quantidade;
};

int main(){
    struct Estoque produtos[5];

    for (int i = 0; i < 5; i++){
        printf("Insira o codigo do produto %d:\n", i+1);
        scanf("%d", &produtos[i].codigo);
        printf("Insira o nome do produto %d:\n", i+1);
        scanf("%s", produtos[i].nome);
        printf("Insira o preco do produto %d:\n", i+1);
        scanf("%f", &produtos[i].preco);
        printf("Insira a quantidade do produto %d:\n", i+1);
        scanf("%d", &produtos[i].quantidade);
    }

    int pedido;
    int unidades;

    while(1){
        printf("\nInsira o codigo do produto desejado:\n");
        scanf("%d", &pedido);
        printf("\nInsira a quantidade do produto desejado:\n");
        scanf("%d", &unidades);
        if (pedido != 0){

            for (int i = 0; i < 5; i++){
                if (pedido == produtos[i].codigo){
                    if (unidades <= produtos[i].quantidade){
                        produtos[i].quantidade -= unidades;
                        printf("\nSeu pedido foi efetuado com sucesso!!\n");
                    }
                    else{
                        printf("\nInfelizmente nao tem o suficiente desse produto em estoque.\n");
                    }
                }
            }
        }
        else{
            printf("\nO produto informado nao foi encontrado.");
            break;
        }
    }

    return 0;
}