#include <stdio.h>

int main () {
    int numeros[7], pares[7], impares[7];
    int i, j = 0, k = 0;

    for(i=0; i<7; i++){
    printf("Digite o numero %d: \n", i+1);
    scanf("%d", &numeros[i]);
    }

    for(i=0; i<7; i++){
        if((numeros[i]%2) == 0){
            pares[j] = numeros[i];
            j++;
        }
        else{
            impares[k] = numeros[i];
            k++;
        }
    }

    printf("\nNumeros lidos: \n");
    for(i=0; i<7; i++){
        printf("Numero %d: %d \n", i + 1, numeros[i]);
    }
    printf("\nNumeros pares: \n");
    for(i=0; i<j; i++){
        printf("Numero %d: %d\n", i + 1, pares[i]);
    }
    printf("\nNumeros impares: \n");
    for(i=0; i<k; i++){
        printf("Numero %d: %d\n", i + 1, impares[i]);
    }

    return 0;
}