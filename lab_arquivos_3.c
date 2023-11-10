#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE * f = fopen("dialogos.txt", "w");
    int dialogos;

    if(f == NULL){
        printf("Erro ao abrir o arquivo.\n");
        system("pause");
        exit(1);
    }

    pritnf("Quantos dialogos você deseja adicionar? \n");
    scanf("%d", &dialogos);


}