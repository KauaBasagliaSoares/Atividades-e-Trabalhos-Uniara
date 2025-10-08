#include <stdio.h>

int main() {
    int qtdNumeros = 0;

    printf("Digite a quantidade de numeros que deseja inserir: ");
    scanf("%d", &qtdNumeros);

    int numeros[qtdNumeros];

    for (int i = 0; i < qtdNumeros; i++)
    {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    printf("Numeros na ordem:\n ");
    for (int i = 0; i < qtdNumeros; i++)
    {
        printf("%d \n", numeros[i]);
    }
    
    printf("\nNumeros na ordem inversa:\n ");
    for (int i = qtdNumeros - 1; i >= 0; i--)
    {
        printf("%d \n", numeros[i]);
    }

}