#include <stdio.h>

struct Programa{
    char nome[16];
    int potencia;
    int tempo;
};

int main(){
    struct Programa eletro[5];

    for (int i = 0; i < 5; i++){
        printf("Inisra o nome do eletrodomestico %d:\n", i+1);
        scanf("%s", eletro[i].nome);
        printf("Inisra a potencia do eletrodomestico %d:\n", i+1);
        scanf("%d", &eletro[i].potencia);
        printf("Inisra o tempo ativo do eletrodomestico %d:\n", i+1);
        scanf("%d", &eletro[i].tempo);

    }

    int dias;
    printf("\nInsira o tempo em dias do teste:\n");
    scanf("%d", &dias);
    
    float consumo_total = 0;

    for (int i = 0; i < 5; i++){
        consumo_total += eletro[i].potencia * eletro[i].tempo * dias;
    }
    printf("O consumo total da casa foi de: %.2f Kw\n", consumo_total);

    for (int i = 0; i < 5; i++){
        float consumo_relativo = ((eletro[i].potencia * eletro[i].tempo * dias * 100)/ consumo_total);
        printf("O consumo relativo do(a) %s e de: %.2f\n", eletro[i].nome, consumo_relativo);
    }

    return 0;
}