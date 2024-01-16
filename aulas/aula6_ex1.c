# include <stdio.h>
#include <stdlib.h>

int main (){
    int N;
    int * numeros;

    printf("Digite a qtd de numeros desejados: \n");
    scanf("%d", &N);

    numeros = (int *) malloc(N * sizeof(int));

    for(int i = 0; i < N; i++){
        printf("Digite o numero %d: \n", i+1);
        scanf("%d", &numeros[i]);
    }

    for(int i = 0; i < N; i++){
        printf("Numero %d: %d\n", i+1, numeros[i]);
    }

    free(numeros);
}