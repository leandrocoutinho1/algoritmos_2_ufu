//  Crie uma função que receba um valor e informe se ele é positivo ou não.

#include <stdio.h>

int VerificaNum(int numero){
    if(numero > 0){
        printf("Numero positivo.\n");
    }
    else if(numero == 0){
        printf("Zero.\n");
    }
    else{
        printf("Numero negativo.\n");
    }
    return 0;
}

int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    VerificaNum(numero);
    VerificaNum(-1);
     return 0;
}