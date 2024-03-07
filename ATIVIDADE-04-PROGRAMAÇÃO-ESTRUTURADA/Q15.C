#include <stdio.h>
#include <string.h>

int main() {
    char dia[10];
    printf("Insira o dia da semana(por extenso): ");
    scanf("%s", dia);
    if (strcmp(dia, "segunda") == 0 || strcmp(dia, "terça") == 0 || strcmp(dia, "terca") == 0 ||
        strcmp(dia, "quarta") == 0 || strcmp(dia, "quinta") == 0 || strcmp(dia, "sexta") == 0) {
        printf("%s é um DIA ÚTIL!!!", dia);
    } 
    else if (strcmp(dia, "sábado") == 0 || strcmp(dia, "sabado") == 0 || strcmp(dia, "domingo") == 0) {
        printf("%s é FIM DE SEMANA!!!", dia);
    } 
    else {
        printf("Dia inválido");
    }
    return 0;
}
