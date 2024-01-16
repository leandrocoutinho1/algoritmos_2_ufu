#include <stdio.h>
void Troque (float *a,float *b){
    float aux;
    
    aux= *a;
    *a= *b;
    *b= aux;
}



int main()
{
    float a, b;
    
    printf("Digite o nro A:\n");
    scanf("%f", &a);
    
    printf("Digite o nro B:\n");
    scanf("%f", &b);
    
    Troque(&a, &b);
    
    printf("Novo a:%2.f\n", a);
    printf("Novo b:%2.f\n", b);
    
    

    return 0;
}
