#include <stdio.h>

struct Vetor{
    char marca[16];
    int ano;
    float preco;
};

int main(){
    struct Vetor carro[5];

    for (int i = 0; i < 5; i++){
        printf("Insira a marca do carro %d:\n", i+1);
        scanf("%s", carro[i].marca);
        printf("Insira o ano do carro %d:\n", i+1);
        scanf("%d", &carro[i].ano);
        printf("Insira o preço do carro %d:\n", i+1);
        scanf("%f", &carro[i].preco);
    }

    float valor;

    while(1){
        printf("\nInsira um preço:\n");
        scanf("%f", &valor);
        printf("\n");
        if (valor != 0){
            for (int i = 0; i < 5; i++){
                if (carro[i].preco < valor){
                    //printf("\n carros com preço inferior a R$ %.2f.", valor);
                    printf("marca: %s, ano: %d, preço: R$ %.2f\n", carro[i].marca, carro[i].ano, carro[i].preco);
                }
            }
        }
        else{
            break;
        }
    }

    return 0;
}
