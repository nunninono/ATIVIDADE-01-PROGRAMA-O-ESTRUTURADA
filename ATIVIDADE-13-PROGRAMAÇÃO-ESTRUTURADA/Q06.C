#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho;
    printf("Insira o tamanho da memoria: \n");
    scanf("%d", &tamanho);
    
    int* memoria = (int*)calloc(tamanho, sizeof(int));
    printf("\n");
    getchar();
    
    printf("\n========================================================\n");
    printf("a. Inserir um valor em uma determinada posição\n");
    printf("b. Consultar o valor contido em uma determinada posição\n");
    printf("========================================================\n\n");
    
    char escolha;
    
    while (1){
        
        printf("\nEscolha uma das opções acima, a ou b:\n");
        scanf(" %c", &escolha);
        
        int local = 0;
        int valor = 0;
        
        if (escolha == 'a'){
            printf("\nInforme onde voce quer inserir um valor:\n");
            scanf("%d", &local);
            printf("\nQual valor voce quer inserir:\n");
            scanf("%d", &valor);
            if(valor % local != 0){
                printf("\nInsira um valor multiplo de %d!!\n", local);
            }
            else{
                memoria[local] = valor;
            }
            
        }
        
        if (escolha == 'b'){
            printf("\nInforme qual posição deve ser consultada:\n");
            scanf("%d", &local);
            printf("\nO numero alocado nessa posição é %d", memoria[local]);
        }
        
        char simounao;
        printf("\nVoce quer parar(s / n)?\n");
        scanf(" %c", &simounao);
        if (simounao == 's'){
            break;
        }
        
    }
    
    free(memoria);
    memoria = NULL;
    return 0;
}
