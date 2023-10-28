#include <stdio.h>

int main() {
    FILE *arquivo;
    char caractere;
    int i = 0;

    arquivo = fopen("resumo_TCC.txt", "r"); // Abre o arquivo para leitura

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Conteúdo do arquivo 'resumo_TCC.txt':\n");

    while ((caractere = fgetc(arquivo)) != EOF) {
        printf("%c", caractere); // Imprime o caractere lido
    }

    fclose(arquivo);

    return 0;
}
