#include <stdio.h>
#include <stdlib.h>



int main() {
    int tamanhoMaximo = 1000;
    FILE *arquivo;
    

    arquivo = fopen("resumo_TCC.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    char *resumo = (char *)malloc(tamanhoMaximo * sizeof(char));
    if (resumo == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }
    

    printf("Digite o texto desejado: Lembre-se, maximo de %d caracteres.\n", tamanhoMaximo);
    gets(resumo);

    fputs(resumo, arquivo);  // Adiciona a linha ao arquivo

    fclose(arquivo);
    free(resumo);

    return 0;
}