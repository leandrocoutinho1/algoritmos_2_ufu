#include <stdio.h>

int main(){
    
    int a = 2;
    float b = 3.5;
    char c = 'a';
    
    int *p_a = &a;
    float *p_b = &b;
    char *p_c = &c;

    printf("\n Valorores antes: \n");
    printf("a= %d / b= %.2f / c= %c\n", *p_a, *p_b, *p_c);
    
    printf("Altere a: \n");
    scanf("%d", p_a);
    fflush(stdin);
    
    printf("Altere b: \n");
    scanf("%f", p_b);
    fflush(stdin);
    
    printf("Altere c: \n");
    scanf("%c", p_c);
    fflush(stdin);
    
    printf("\n Valorores depois: \n");
    printf("a= %d / b= %.2f / c= %c\n", *p_a, *p_b, *p_c);
    
    return 0;
}
