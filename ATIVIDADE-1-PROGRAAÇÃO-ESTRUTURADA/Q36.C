#include <stdio.h>

int main(){
   float num1, num2, num3, media;
   printf("Digite um numero decimal: ");
   scanf("%f",&num1);
   printf("Digite outro numero decimal: ");
   scanf("%f",&num2);
   printf("Digite outro numero decimal: ");
   scanf("%f",&num3);
   media = (num1 + num2 + num3)/3;
   printf("A media entre os numeros digitados é %.2f", media);
   return 0;
}
