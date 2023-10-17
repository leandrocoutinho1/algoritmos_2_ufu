#include <stdio.h>
#include <stdlib.h>

float inc(float num, int perc){
    float resultado; 
    
    resultado = num + (num * (perc / 100));

    return resultado;
}

int main()
{
    float num, result;
    int perc;
    
    printf("Digite o numero desejado: ");
    scanf("%f", &num);
    
    printf("Digite o percentual desejado: ");
    scanf("%d", &perc);
    
    result = inc(num, perc);
    printf("Numero novo = %.2f\n", result);

    return 0;
}
