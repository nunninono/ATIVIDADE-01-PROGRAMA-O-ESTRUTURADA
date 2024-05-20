#include <stdio.h>
#include <stdlib.h>

int main(){
    int* arr = malloc(5 * sizeof(int));
    
    for (int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    
    free(arr);
    arr = NULL;
    
}
