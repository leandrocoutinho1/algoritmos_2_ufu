#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *f = fopen("notasAlunos.txt", "w");
    if(f == NULL){
        printf("Erro ao abrir o arquivo.\n");
        system("pause");
        exit(1);
    }

    char resumo[30] = "Joao,9\nMaria,8\nJose,9";
    fputs(resumo, f);

    fclose(f);
    printf("Arquivo fechado com sucesso.");
}