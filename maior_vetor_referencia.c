#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void MaiorVetor(int* maior, int* menor, int* vetor, int tam){
    if (tam == 1){
        printf("O vetor tem apenas 1 posição.");
    }
    else{
        for(int i=0; i<tam; i++){
            if(vetor[i] > *maior){
                *maior = vetor[i];
            }
            if(vetor[i] < *menor){
                *menor = vetor[i];
            }

        }
    }
}


int main()
{
    int tam;
    int* vetor;
    int maior;
    int menor;
    
    printf("Qual o tamanho do vetor desejado? ");
    scanf("%d", &tam);
    
    vetor = (int *)malloc(tam*sizeof(int));
    
    for(int i=0; i<tam; i++){
        printf("Digite o %d elemento: \n", i + 1);
        scanf("%d", &vetor[i]);
    }
    maior = vetor[0];
    menor = vetor[0];
    
    MaiorVetor(&maior, &menor, vetor, tam);
    
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;
}
