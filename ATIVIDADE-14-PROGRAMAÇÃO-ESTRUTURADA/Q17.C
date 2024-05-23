#include <stdio.h>
                    // A questão nao deixou claro em que momento os dados seriam inputados
struct Endereco{
    char rua[20];
    int numero;
    char complemento[20];
    char bairro[20];
    char cep[20];
    char cidade[20];
    char estado[20];
    char pais[20];
};

struct Telefone{
    int ddd;
    char numero[20];
};

struct Aniversario{
    int dia;
    int mes;
    int ano;
};

struct Dados{
    char nome[20];
    char email[50];
    char string[20];
    struct Endereco endereco;
    struct Telefone telefone;
    struct Aniversario aniversario;
};

int main(){
    struct Dados agenda[100];
    
    printf("==================================================\n");
    printf("a) Buscar por primeiro nome.\n");
    printf("b) Buscar por mes de aniversario.\n");
    printf("c) Buscar por dia e mes de aniversario.\n");
    printf("d) Inserir pessoa por ordem alfabetica.\n");
    printf("e) Retirar pessoa.\n");
    printf("f) Imprimir dados pessoais.\n");
    printf("      * Nome, telefone e email.\n");
    printf("      * Todos os dados.\n");
    printf("==================================================\n\n");

    char escolha;

    while(1){
        printf("Escolha umas das opcoes acima:\n");
        scanf(" %c", &escolha);

        if(escolha == 'a'  || escolha == 'b' || escolha == 'c' || escolha == 'd' || escolha == 'e' || escolha == 'f'){
            if (escolha == 'a'){

            }
            if (escolha == 'b'){

            }
            if (escolha == 'c'){

            }
            if (escolha == 'd'){

            }
            if (escolha == 'e'){

            }
            if (escolha == 'f'){

            }
        }

        else{
            break;
        }
    }

    return 0;
}