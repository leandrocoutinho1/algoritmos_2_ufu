#include <stdio.h>

long long int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n, i;

    printf("Digite o número de termos que você deseja gerar na sequência de Fibonacci: ");
    scanf("%d", &n);

    printf("Sequência de Fibonacci com %d termos:\n", n);

    for (i = 0; i < n; ++i) {
        printf("%lld, ", fibonacci(i));
    }

    printf("\n");

    return 0;
}
