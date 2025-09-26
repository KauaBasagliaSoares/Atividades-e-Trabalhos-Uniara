#include <stdio.h>

int main() {
    int i;
    int x;
    int soma = 0;
    
    printf("Digite um numero impar: \n");
    scanf("%d", &x);
    
     for (i = 1; i <= x; i = i + 2)
            {
                soma = soma +  i;
                printf("A soma dos numeros de 1 a %d e: %d\n", x, soma);
            }

    return 0;
}