
int main()
{
    int i = 4;
    int j = 4;
    int matriz1[i][j];
    int matriz2[i][j];
    int matriz3[i][j];

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            scanf("%d", &matriz1[i][j]);
        }
    }
    
    printf("\n");
    
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            scanf("%d", &matriz2[i][j]);   
        }
    }
    
    printf("\n");
    
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            if (matriz1[i][j] > matriz2[i][j]){
                matriz3[i][j] = matriz1[i][j];
            }
            else{
                matriz3[i][j] = matriz2[i][j];
            }
        }
    }
    
    printf("MATRIZ 3\n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("%d ", matriz3[i][j]);   
        }
        printf("\n");
    }
    return 0;
}