#include <stdio.h>

int main () {

    char nome[] = "Jose Augusto\0";
    int i;

    for(i=0; i<13; i++){
        printf("%c", *(nome+i));
    }

}