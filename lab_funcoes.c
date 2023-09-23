#include <stdio.h>
#include <stdlib.h>

int potencia(int x, int n){
    int resultado = 1; 
    if(n == 0){
        resultado = 1;
    }
    else{
        for(int i = 0; i < n; i++){
            resultado *= x;
        }
    }
    
    return resultado;
}

int main()
{
    int x, n, result;
    
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    result = potencia(x, n);
    printf("O valor de %d ^ %d = %d\n", x, n, result);

    return 0;
}
