#include <stdio.h>
#include <string.h>

struct Horario{
    int hora;
    int minuto;
    int segundos;
    };

struct Data{
    int dia;
    int mes;
    int ano;    
    };

struct Compromisso{
    char descreve[100];
    struct Horario horario1;
    struct Data data1;
};

int main(){
    struct Compromisso compromisso1;

    compromisso1.horario1.hora = 16;
    compromisso1.horario1.minuto = 40;
    compromisso1.horario1.segundos = 32;

    compromisso1.data1.ano = 2024;
    compromisso1.data1.mes = 10;
    compromisso1.data1.dia = 20;

    strcpy(compromisso1.descreve, "Aniverário de shao");

    return 0;
}
