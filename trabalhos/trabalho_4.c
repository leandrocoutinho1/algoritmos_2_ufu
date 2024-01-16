#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>
#include <ctype.h>

#define MAX_WORD_LENGTH 1000

void createTextDirectory() {
    // Inserir o caminho completo da pasta que você deseja criar
    const char *caminho = "/Users/leandro.coutinho/Documents/Projetos/Pessoal/Trabalho Algortimos/trabalho4texto";

    // Cria a pasta "trabalho4texto"
    if (mkdir(caminho, 0777) == 0) {
        printf("Pasta criada com sucesso.\n");
    } else {
        printf("Falha ao criar a pasta.\n");
    }
}

// Função para calcular a média
float calcularMedia(int soma, int quantidade) {
    if (quantidade == 0) {
        return 0.0;
    }
    return (float)soma / quantidade;
}

// Função para verificar se um caractere é um símbolo que deve ser ignorado
int ehSimbolo(char c) {
    return (c == '.' || c == ',' || c == '!' || c == ';');
}

// Função para processar o conteúdo do arquivo e criar arquivos de texto
void processarArquivo(FILE *arquivo, int numeroArquivo, const char *diretorioSaida,
                      int *numPalavrasTotal, int *numParagrafosTotal,
                      char *maiorPalavra, char *menorPalavra) {
    char palavra[MAX_WORD_LENGTH];

    int numPalavras = 0;
    int numParagrafos = 0;

    // Construir o caminho completo do arquivo de saída
    char caminhoCompletoSaida[1024];
    snprintf(caminhoCompletoSaida, sizeof(caminhoCompletoSaida),
             "%s/rev%d.txt", diretorioSaida, numeroArquivo);

    // Abrir o arquivo de saída como texto
    FILE *arquivoSaida = fopen(caminhoCompletoSaida, "w");
    if (!arquivoSaida) {
        perror("Erro ao criar o arquivo de saída");
        exit(EXIT_FAILURE);
    }

    while (fscanf(arquivo, "%s", palavra) != EOF) {
        // Contagem de palavras
        numPalavras++;

        // Verificar tamanho da palavra
        int tamanhoPalavra = strlen(palavra);
        if (tamanhoPalavra > strlen(maiorPalavra)) {
            strcpy(maiorPalavra, palavra);
        }
        if (tamanhoPalavra < strlen(menorPalavra) && !ehSimbolo(palavra[tamanhoPalavra - 1])) {
            strcpy(menorPalavra, palavra);
        }

        // Verificar se é um parágrafo
        char proximoChar = fgetc(arquivo);
        if ((proximoChar == '\n' && fgetc(arquivo) == '\t') || proximoChar == EOF) {
            numParagrafos++;
        } else {
            ungetc(proximoChar, arquivo);
        }

        // Copiar o conteúdo do arquivo binário para o arquivo de texto
        fprintf(arquivoSaida, "%s ", palavra);
    }

    // Adicionar quebra de linha no final do arquivo de texto
    fprintf(arquivoSaida, "\n");

    // Fechar os arquivos
    fclose(arquivo);
    fclose(arquivoSaida);

    // Atualizar estatísticas totais
    *numPalavrasTotal += numPalavras;
    *numParagrafosTotal += numParagrafos;
}

int main() {
    // Mudar os caminhos
    const char *diretorioEntrada = "/Users/leandro.coutinho/Documents/Projetos/Pessoal/Trabalho Algortimos/trabalho4";
    const char *diretorioSaida = "/Users/leandro.coutinho/Documents/Projetos/Pessoal/Trabalho Algortimos/trabalho4texto";

    // Criar o diretório de saída
    createTextDirectory();

    // Abrir o diretório de entrada
    DIR *diretorio = opendir(diretorioEntrada);
    if (!diretorio) {
        perror("Erro ao abrir o diretório");
        return EXIT_FAILURE;
    }

    // Inicializar estatísticas totais
    int numPalavrasTotal = 0;
    int numParagrafosTotal = 0;
    char maiorPalavra[MAX_WORD_LENGTH] = "";
    char menorPalavra[MAX_WORD_LENGTH] = "AAAAAAAAAAAAAAAAAAAA"; // Uma palavra impossível de ocorrer

    // Processar cada arquivo no diretório
    struct dirent *entrada;
    int numeroArquivo = 0;
    while ((entrada = readdir(diretorio)) != NULL) {
        // Ignorar diretórios '.' e '..'
        if (strcmp(entrada->d_name, ".") == 0 || strcmp(entrada->d_name, "..") == 0) {
            continue;
        }

        // Construir o caminho completo do arquivo de entrada
        char caminhoCompletoEntrada[1024];
        snprintf(caminhoCompletoEntrada, sizeof(caminhoCompletoEntrada),
                 "%s/%s", diretorioEntrada, entrada->d_name);

        // Abrir o arquivo de entrada como binário
        FILE *entradaArquivo = fopen(caminhoCompletoEntrada, "rb");
        if (!entradaArquivo) {
            perror("Erro ao abrir o arquivo de entrada");
            closedir(diretorio);
            return EXIT_FAILURE;
        }

        // Processar o arquivo e criar o arquivo de texto correspondente
        processarArquivo(entradaArquivo, ++numeroArquivo, diretorioSaida,
                         &numPalavrasTotal, &numParagrafosTotal,
                         maiorPalavra, menorPalavra);

        // Fechar o arquivo de entrada
        fclose(entradaArquivo);
    }

    // Fechar o diretório
    closedir(diretorio);

    // Imprimir estatísticas totais no terminal com printf
    printf("Relatório geral:\n");
    printf("1) Média do número de palavras por review: %.1f\n", calcularMedia(numPalavrasTotal, numeroArquivo));
    printf("2) Média do número de parágrafos por review: %.1f\n", calcularMedia(numParagrafosTotal, numeroArquivo));
    printf("3) Maior palavra: %s\n", maiorPalavra);
    printf("4) Menor palavra: %s\n", menorPalavra);

    printf("Relatório gerado com sucesso.\n");

    return EXIT_SUCCESS;
}
