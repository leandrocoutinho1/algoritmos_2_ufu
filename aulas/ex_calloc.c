#include <stdio.h>
#include <stdlib.h>

int main () {
    int i;
    int *p = malloc(5*sizeof(int));

    for(i=0; i<5; i++){
    printf("Digite o valor %d: ", i + 1);
    p[i] = i+1;
    }

    for(i=0; i<5; i++){
    printf("%d\n", p[i]);
    }

    printf("\n");
    // Diminui o tamanho do array
    p = realloc(p,10*sizeof(int));
    for(i=0; i<5; i++){
    printf("%d\n", p[i]);
    }

    printf("\n");
    // Aumenta o tamanho do array
    p = realloc(p,10*sizeof(int));
    for(i=0; i<5; i++){
    printf("%d\n", p[i]);
    }

    system("pause");

    return 0;
}