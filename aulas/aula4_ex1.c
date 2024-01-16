#include <stdio.h>

int main (){
    int a, b;
    int *end_a = &a;
    int *end_b = &b;


    printf("Leia a: \n");
    scanf("%d", end_a);

    printf("Leia b: \n");
    scanf("%d", end_b);

    printf("a: %d / b: %d\n", *end_a, *end_b);
    printf("end a: %u / end b: %u\n", end_a, end_b);

    if(end_a > end_b){
        printf("Maior end: a / Conteúdo: %d\n", a);
    }
    else{
        printf("Maior end: b / Conteúdo: %d\n", b);
    }

    return 0;
}