#include <stdio.h>

struct Vetor{
    float x;
    float y;
    float z;
};

int main(){
    struct Vetor vetores[2];
    float somax, somay, somaz;

    for (int i = 0; i < 2; i++){
        printf("Insira a posição x do vetor %d:\n",i+1);
        scanf("%f", &vetores[i].x);
        printf("Insira a posição y do vetor %d:\n",i+1);
        scanf("%f", &vetores[i].y);
        printf("Insira a posição z do vetor %d:\n",i+1);
        scanf("%f", &vetores[i].z);
    }

    somax = vetores[0].x + vetores[1].x;
    somay = vetores[0].y + vetores[1].y;
    somaz = vetores[0].z + vetores[1].z;

    printf("\nA soma dos dois vetores fornecidos possui as dimensões (%.2f, %.2f, %.2f)", somax, somay, somaz);
    return 0;
}