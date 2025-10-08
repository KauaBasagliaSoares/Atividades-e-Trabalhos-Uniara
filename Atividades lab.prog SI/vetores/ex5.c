#include <stdio.h>

int main(){
    int numero[12] = {10, 20, 30, 40, 3, 10, 20, 7, 8, 100, 23, 44};

    int maior = 0;

    for (int i = 1; i < 12; i++)
    {
        if(numero[i] > maior){
            maior = numero[i];
        }
    }
    printf("O maior numero do vetor e: %d\n", maior);
    
    
    return 0;
}