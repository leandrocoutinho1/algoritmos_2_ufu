#include <stdio.h>

int main() {
    FILE *arquivo;
    char caractere;
    int i = 0;
    int n_a = 0;

    arquivo = fopen("resumo_TCC.txt", "r"); // Abre o arquivo para leitura

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Conteúdo do arquivo 'resumo_TCC.txt':\n");

    while ((caractere = fgetc(arquivo)) != EOF) {
        i +=1;
        if(caractere == 'a' || caractere == 'A'){
            n_a += 1;
        }
    }

    printf("Numero de caracteres: %d\n", i);
    printf("Numero de A's: %d\n", n_a);

    fclose(arquivo);

    return 0;
}
