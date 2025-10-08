#include <stdio.h>

int main () {
    int numero[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        printf("Elemento %d: %d\n", i, numero[i]);
    }
    printf("\n Posicao 2: %d\n", numero[2]);
    
    return 0;
}