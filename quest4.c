#include <stdio.h>

int main (){

    int *p;

    printf("Digite um inteiro: \n");
    scanf("%d", p);
    printf("O numero digitado foi %d\n", *p);


    printf("Digite um double: \n");
    scanf("%lf", p);
    printf("O numero digitado foi %lf\n", *(double *)p);

    return 0;
}