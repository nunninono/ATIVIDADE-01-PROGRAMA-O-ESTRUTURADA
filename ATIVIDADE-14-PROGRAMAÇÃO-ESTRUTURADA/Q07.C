#include <stdio.h>

struct Funcionario{
    char nome[50];
    int idade;
    char sexo;
    char cpf[20];
    char data_de_nascimento[20];
    char codigo_do_setor_onde_trabalha[20];
    char cargo_que_ocupa[31];
    float salario;
};

int main(){
    struct Funcionario dados;

    printf("Insira o nome do funcionário:\n");
    fgets(dados.nome, sizeof(dados.nome), stdin);
    printf("Insira a idade do funcionário:\n");
    scanf("%d", &dados.idade);
    printf("Insira o sexo do funcionário:[M][F]\n");
    scanf(" %c", &dados.sexo);
    printf("Insira o CPF do funcionário:\n");
    scanf("%s", dados.cpf);
    printf("Insira a data de nascimento do funcionário:[dd/mm/aaaa]\n");
    scanf("%s", dados.data_de_nascimento);
    printf("Insira o codigo do setor onde o funcionário trabalha:\n");
    scanf("%s", dados.codigo_do_setor_onde_trabalha);
    printf("Insira o cargo que o funcionário ocupa:\n");
    scanf("%s", dados.cargo_que_ocupa);
    printf("Insira o salário do funcionário:\n");
    scanf("%f", &dados.salario);

    printf("\n         DADOS DO FUNCIONÁRIO\n");
    printf("nome: %s", dados.nome);
    printf("idade: %d\n", dados.idade);
    printf("sexo: %c\n", dados.sexo);
    printf("CPF: %s\n", dados.cpf);
    printf("data de nascimento: %s\n", dados.data_de_nascimento);
    printf("codigo do setor onde trabalha: %s\n", dados.codigo_do_setor_onde_trabalha);
    printf("cargo que ocupa: %s\n", dados.cargo_que_ocupa);
    printf("salário: R$ %.2f\n", dados.salario);
    return 0;
}