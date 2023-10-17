#include <stdio.h>

int Fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * Fatorial(n - 1);
    }
}

int main() {
    int numero;
    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("O fatorial não está definido para números negativos.\n");
    } else {
        int fatorial = Fatorial(numero);
        printf("O fatorial de %d é %d\n", numero, fatorial);
    }

    return 0;
}
