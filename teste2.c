#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 40;
    int *p;
    p = &a;

    /*
    a) Copie o código acima e mostre o endereço da variável a de duas formas: uma
    usando &a e outra usando o ponteiro p. Os endereços devem ser os mesmos.
    */

    printf("Endereco de 'a' usando &a: %p\n", &a);
    printf("Endereco de 'a' usando ponteiro p: %p\n", p);

    return 0;
}

