#include <stdio.h>

int main(){
    int num = 1;
    do{
        if (num % 2 != 0){
            printf("%d\n",num);
        }
        num += 1;
    }
    while (num <= 100);
    return 0;
}