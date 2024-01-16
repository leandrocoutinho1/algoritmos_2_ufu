#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void createBinaryFile(const char *review, const char *fileName) {
    char filePath[2000];  // Ajuste o tamanho conforme necessário
    // Alterer p caminho
    sprintf(filePath, "/Users/leandro.coutinho/Documents/Projetos/Pessoal/Trabalho Algortimos/trabalho4/%s", fileName); // Criar pasta com nome "trabalho4" e passar o caminho

    FILE *file = fopen(filePath, "wb");

    if (file == NULL) {
        perror("Erro ao criar arquivo binário");
        exit(EXIT_FAILURE);
    }

    // Escrever o review no arquivo binário
    fwrite(review, sizeof(char), strlen(review), file);

    fclose(file);
}

int main() {
    const char *review1 = "Minha estadia no hotel foi maravilhosa! A localização era perfeita, a uma curta distância dos pontos turísticos. O serviço foi impecável, e a equipe sempre pronta para ajudar. Os quartos eram confortáveis e bem decorados. Certamente voltarei na próxima vez que estiver em Paris.";

    const char *review2 = "Este resort é um paraíso na terra! As praias de areias brancas, as águas cristalinas e o serviço de classe mundial fizeram desta a melhor experiência de férias. As vilas sobre a água são simplesmente deslumbrantes. Cada momento foi mágico, e as atividades oferecidas são incríveis. Recomendo a todos!";

    const char *review3 = "Adorei minha estadia nesta pousada encantadora. A atmosfera histórica combinada com o charme local criou uma experiência única. O café da manhã caseiro era delicioso, e a equipe era acolhedora. A localização no coração da cidade histórica tornou fácil explorar a pé. Uma verdadeira jóia escondida!";

    const char *review4 = "O safari foi uma aventura emocionante! Ver os animais selvagens em seu habitat natural foi inesquecível. Os guias eram experientes e apaixonados pela vida selvagem. As acomodações no acampamento eram confortáveis, e as refeições eram saborosas. Uma experiência única que todos deveriam ter pelo menos uma vez na vida.";

    // Criar os quatro arquivos binários
    createBinaryFile(review1, "review1.bin");
    createBinaryFile(review2, "review2.bin");
    createBinaryFile(review3, "review3.bin");
    createBinaryFile(review4, "review4.bin");

    printf("Arquivos binários gerados com sucesso.\n");

    return 0;
}
