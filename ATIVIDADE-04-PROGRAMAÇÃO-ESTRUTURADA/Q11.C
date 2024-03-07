#include <stdio.h>

int main(){
    float peso, altura, imc;
    printf("Qual seu peso? ");
    scanf("%f",&peso);
    printf("Qual sua altura? ");
    scanf("%f",&altura);
    imc = peso / (altura*altura);
    if (imc < 18.5){
        printf("IMC: %.2f Voce está abaixo do peso", imc);
    }
    else if(imc > 18.5 && imc < 24.9){
        printf("IMC: %.2f Voce está com peso normal", imc);
    }
    else if(imc > 24.9 && imc < 29.9){
        printf("IMC: %.2f Voce está com excesso de peso", imc);
    }
    else if(imc > 29.9 && imc < 34.9){
        printf("IMC: %.2f Voce está com obesidade I", imc);
    }
    else if(imc > 34.9 && 39.9){
        printf("IMC: %.2f Voce está com obesidade II", imc);
    }
    else{
        printf("IMC: %.2f Voce está com obesidade III", imc);
    }
    return 0;
}
