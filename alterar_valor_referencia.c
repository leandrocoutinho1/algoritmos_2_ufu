#include <stdio.h>
#include <stdlib.h>


void Troque(float *x, float *y){
    float aux = *x;
    *x = *y;
    *y = aux;
}


int main(){
    float x, y;
    printf("Digite x: \n");
    scanf("%f", &x);

    printf("Digite y: \n");
    scanf("%f", &y);

    printf("x: %.2f / y: %.2f\n", x, y);

    Troque(&x, &y);

    printf("Novo x: %.2f / Novo y: %.2f\n", x, y);

    return 0;
}