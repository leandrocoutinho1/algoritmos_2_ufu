#include <string.h>
#include <stdio.h>

// Função para cifrar um único caractere da mensagem
char caractere_cifra(char caractere_mensagem, char caractere_chave) {
    char resultado;

    // Verificando se o caractere da mensagem é um espaço em branco
    if (caractere_mensagem == ' ') {
        return ' ';
    }

    int deslocamento;
    int minuscula = 0; // Flag para verificar se o caractere da mensagem é minúsculo

    // Verificando se o caractere da chave está no intervalo 'a' a 'z'
    if (caractere_chave >= 'a' && caractere_chave <= 'z') {
        deslocamento = caractere_chave - 'a';
    } else {
        // Caso contrário, a chave está no intervalo 'A' a 'Z'
        deslocamento = caractere_chave - 'A';
    }

    // Verificando se o caractere da mensagem está no intervalo 'a' a 'z'
    if (caractere_mensagem >= 'a' && caractere_mensagem <= 'z') {
        minuscula = 1;
    }

    // Realizando o cálculo do caractere cifrado
    resultado = (caractere_mensagem - (minuscula ? 'a' : 'A') + deslocamento) % 26 + (minuscula ? 'a' : 'A');
    return resultado;
}

// Função para cifrar a mensagem completa
void criptografar_mensagem(char *mensagem, char *palavra_chave) {
    char mensagem_criptografada[500];
    int tamanho_mensagem = strlen(mensagem);
    int tamanho_palavra_chave = strlen(palavra_chave);
    int i, j = 0;

    for (i = 0; i < tamanho_mensagem; i++) {
        if (mensagem[i] != ' ') {
            // Verificando se a palavra-chave chegou ao final e reiniciando se necessário
            if (j == tamanho_palavra_chave) {
                j = 0;
            }
            // Chamando a função caractere_cifra para cifrar o caractere da mensagem
            mensagem_criptografada[i] = caractere_cifra(mensagem[i], palavra_chave[j]);
            j++;
        } else {
            mensagem_criptografada[i] = ' ';
        }
    }
    mensagem_criptografada[i] = '\0';

    // Imprimindo a mensagem cifrada
    printf("%s\n", mensagem_criptografada);
}

int main() {
    char mensagem[500];
    char palavra_chave[500];

    // Solicitando que o usuário insira a mensagem aberta e a palavra-chave
    printf("Digite a mensagem aberta: ");
    fgets(mensagem, sizeof(mensagem), stdin);
    printf("Digite a palavra-chave: ");
    fgets(palavra_chave, sizeof(palavra_chave), stdin);

    // Removendo quebras de linha das entradas
    mensagem[strcspn(mensagem, "\n")] = '\0';
    palavra_chave[strcspn(palavra_chave, "\n")] = '\0';

    // Chamando a função para criptografar a mensagem
    criptografar_mensagem(mensagem, palavra_chave);

    return 0;
}
