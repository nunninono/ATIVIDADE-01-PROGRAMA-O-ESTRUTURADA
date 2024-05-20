#include <stdio.h>
#include <stdlib.h>

void alocar(char* arr, int tamanho){
    printf("\n");
    fgets(arr, tamanho, stdin);
}



int main()
{
    int i;
    
    scanf("%d", &i);
    i++;
    getchar();
    
    char* string = malloc(i * sizeof(char));
    
    alocar(string, i);
    
    printf("\n");
    for (int j = 0; j < i; j++){
        if (string[j] != 'a' && string[j] != 'e' && string[j] != 'i' && string[j] != 'o' && string[j] != 'u'){
            printf("%c", string[j]);
        }
    }
    
    free(string);
    string = NULL;

    return 0;
}
