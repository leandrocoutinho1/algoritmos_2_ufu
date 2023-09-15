#include <stdio.h>

int main (){
    int numeros[5];
    int *p = numeros;
    for(int i =0; i<5; i++){
        printf("Digite o numero %d: \n", i+1);
        scanf("%d", p + i);
        fflush(stdin);
        printf("Valor dig: %d / Dobro: %d \n", *(p+i), (*(p+i)) * 2);
    }

    return 0;
}