#include <stdio.h>

int main()
{
    int i = 5;
    int j = 5;
    int matriz[i][j];
    
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i - j == 0){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    
    return 0;
}