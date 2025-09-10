#include <stdio.h>

    int main(){
        int numero = 0;

        printf("Digite um numero \n");
        scanf("%d", &numero);

      /**  if (numero == 1 || numero == 3 || numero == 5 || numero == 7 || numero == 9)
        {
          printf("O numero e impar %d ", numero);
        }
        else
        {
            printf("O numero e par %d ", numero);
        }
        */

        if (numero%2 == 0)
             printf("O numero e par %d ", numero);
        else
            printf("O numero e impar %d ", numero);
    
                return 0;
    }