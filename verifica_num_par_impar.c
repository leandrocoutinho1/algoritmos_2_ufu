#include <stdlib.h>
#include <stdio.h>

void VerificaNum(int x){
    if((x%2)==0){
        printf("Número %d eh par.", x);
    }
    else{
        printf("Número %d eh impar.", x);
    }
}


int main()
{
    int x;
    printf("Digite x: \n");
    scanf("%d", &x);
    
    VerificaNum(x);

    return 0;
}
