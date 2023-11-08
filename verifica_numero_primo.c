#include <stdlib.h>
#include <stdio.h>

void Primo(int x){
    if(x<2){
        printf("Digite um numero valido.");
    }
    else{
        int cont = 0;
        for(int i = x; i >= 2; i--){
            if((x%i) == 0){
                cont += 1;
            }
        }
        if(cont > 1){
            printf("x = %d nao e numero primo.", x);
        }
        else{
            printf("x = %d e numero primo.", x);
        }
    }
}


int main()
{
    int x;
    printf("Digite x: \n");
    scanf("%d", &x);
    
    Primo(x);

    return 0;
}
