#include <stdio.h>

int main() {
    int i = 1;
    int soma = 0;

    while (soma <= 100) {
        printf("Digite um valor ate 100, valor atual %d: \n", soma);
        scanf("%d", &i);
        soma = soma + i;
    }

    return 0;
}