#include <stdio.h>

int main () {
    int numeros[5] = {10, 20, 30, 40, 50};
    int soma =0;

    for (int i = 0; i < 5; i++)
    {
        soma += numeros[i];
    }
    printf("A soma dos elementos do array e: %d\n", soma);
    
    return 0;
}