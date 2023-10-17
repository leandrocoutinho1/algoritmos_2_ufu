#include <stdio.h>

int Exponenciacao(int x, int y){
    if(y == 0){
        return 1;
    }
    if(y == 1){
        return x;
    }
    else{
        return x * Exponenciacao(x, y - 1);
    }
}

int main(){
    int x, y;

    printf("Digite o numero x: \n");
    scanf("%d", &x);
    printf("Digite o numero y: \n");
    scanf("%d", &y);

    printf("%d ^ %d = %d\n", x, y, Exponenciacao(x, y));
}