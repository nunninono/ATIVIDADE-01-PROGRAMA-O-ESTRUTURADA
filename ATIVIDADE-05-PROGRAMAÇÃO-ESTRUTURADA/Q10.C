#include <stdio.h>

int main(){
    int nove = 9;
    int mult = 1;
    int termo = 0;
    do{
        mult = nove * termo;
        printf("%d x %d = %d\n",nove, termo, mult);
        termo += 1;
    }
    while(termo <= 10);
    return 0;
}
