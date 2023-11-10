#include <stdio.h>

int main() {
    FILE *arquivo;

    arquivo = fopen("/Users/leandro.coutinho/Documents/Projetos/Pessoal/algoritmos_2_ufu/notasAlunos.txt", "r"); // Abre o arquivo para leitura

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Conteúdo do arquivo 'resumo_TCC.txt':\n");

    char c = fgetc(arquivo);

    while(c != EOF){
        printf("%c", c);
        c = fgetc(arquivo);
    }

    fclose(arquivo);
    printf("\nArquivo fechado");

    return 0;
}
