#include <stdio.h>
#include <math.h>

int main()
{
    
    int i = 10;
    int j = 10;
    int matriz[i][j];
    int termo = 0;


    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if (i < j){
                termo = (2 * i) + (7 * j);
                printf("%d ", termo);
            }
            else if (i == j){
                termo = 3 * pow(i, 2);
                printf("%d ", termo);
            }
            else{
                termo = 5 * pow(j, 2) + 1;
                printf("%d ", termo);
            }
        }
        printf("\n");
    }
    return 0;
}
