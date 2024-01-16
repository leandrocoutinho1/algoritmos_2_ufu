/// 1. Lendo arquivo
// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//     FILE *f;

//     f = fopen("/Users/leandro.coutinho/Documents/Projetos/Pessoal/algoritmos_2_ufu/notas.txt", "r");

//     if(f == NULL){
//         printf("Erro ao abrir arquivo.\n");
//         exit(1);
//     }

//     fclose(f);
//     printf("Sucesso ao abrir arquivo.\n");

//     return 0;

// }


/// 2. Escrevendo no arquivo
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f;

    f = fopen("/Users/leandro.coutinho/Documents/Projetos/Pessoal/algoritmos_2_ufu/notas.txt", "a");  // Use "a" para anexar ao arquivo

    if (f == NULL) {
        printf("Erro ao abrir arquivo.\n");
        exit(1);
    }

    fputc(f, "Manipulando arquivos.\n");  // Adiciona a linha ao arquivo

    fclose(f);
    printf("Sucesso ao abrir arquivo.\n");

    return 0;
}
