#include <stdio.h>

int main (){
    float matriz[3][3]= {{123}, {456}};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("End Matriz[%d][%d] = %u\n", i, j, &matriz[i][j]);
        }
    }

    return 0;
}