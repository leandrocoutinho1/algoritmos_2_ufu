#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val[5] = {2, 4, 5, 8, 10};
    unsigned int end_val = &val[2];

    printf("Digite o valor 6: \n");
    scanf("%d", end_val);
    for(int i=0; i<5; i++)
    {
        printf("%d\n", val[i]);
    }


    return 0;
}
