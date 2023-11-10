#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *f = fopen("/Users/leandro.coutinho/Documents/Projetos/Pessoal/algoritmos_2_ufu/notasAlunos.txt", "r");
    if(f == NULL){
        printf("Erro ao abrir o arquivo.\n");
        system("pause");
        exit(1);
    }

    char c = fgetc(f);
    while(c != EOF){
        printf("%c", c);
        c = fgetc(f);
    }
   
    fclose(f);
    printf("\nArquivo fechado com sucesso.\n");

    return 0;
}