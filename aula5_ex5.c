#include <stdio.h>

int main (){
    int numeros[5];
    int pares[5];
    int j = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite o numero %d: \n", i + 1);
        scanf("%d", &numeros[i]);
    }

    for(int i = 0; i < 5; i++){
        if((numeros[i] % 2) == 0){
            pares[j] = numeros[i];
            j++;
        }
    }

    for(int i = 0; i < j; i++){
        printf("Numero par %d: %d / End: %u\n", i + 1, pares[i], &pares[i]);
    }

    return 0;
}