#include <stdio.h>

int main()
{
    int i = 4;
    int j = 4;
    int matriz[i][j];
    int mult = 0;
    
    for(i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            mult = i * j;
            printf("%d ", mult);
        }
        printf("\n");
    }

    return 0;
}