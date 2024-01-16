#include <stdio.h>
#include <stdlib.h>

int main () {
    int *p;

    p = (int *) malloc(5*sizeof(int));

    if(p== NULL) {
        printf("Erro: memoria insuficiente");
    }
    int i;
    for(i=0; i<5; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d",&p[i]);
    }

    return 0;

}