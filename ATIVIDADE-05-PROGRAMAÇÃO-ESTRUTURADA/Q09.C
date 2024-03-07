#include <stdio.h>

int main(){
    int num = 1;
    int mult = 1;
    do{
        mult = mult * num ;
        printf("%d\n", mult);
        num += 1;
    }
    while(5 >= num);
    return 0;
}

