#include <stdio.h>

int main(){
    int num = 1;
    do{
        if (num % 3 == 0){
            printf("%d\n",num);
        }
        num += 1;
    }
    while (num <= 50);
    return 0;
}