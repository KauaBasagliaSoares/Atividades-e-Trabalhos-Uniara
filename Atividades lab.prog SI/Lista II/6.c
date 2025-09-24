#include <stdio.h>

    int main(){
        int val;
        int par = 0;

        printf("numeros pares de 2 a 50\n");

            for (val = 1; val <= 25; val++)
            {
                par = par + 2;
                printf("Numeros pares %d\n", par);
            }
            

    return 0;
    }