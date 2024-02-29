#include <stdio.h>

int main() {
    char data[11];
    printf("Escreva uma data no formato dd/mm/aaaa: ");
    scanf("%10s", data);

    printf("dia: %c%c\nmes: %c%c\nano: %c%c%c%c", data[0], data[1], data[3], data[4], data[6], data[7], data[8], data[9]);

    return 0;
}
