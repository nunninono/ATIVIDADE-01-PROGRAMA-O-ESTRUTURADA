#include <stdio.h>

int main()
{
    char string[20];
    
    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);
    
    for (int i = 0; i < sizeof(string); i++){
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u'){
            string[i] = "";
        }
        printf("%c", string[i]);
    }
    return 0;
}
