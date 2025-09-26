#include <stdio.h>

int main() {
    int i = 1;
    int soma = 0;

    while (i <= 200) {
        i = i + 1;
        soma = soma + i;
        i++;
        printf("%d\n", soma);
    }

    printf("A soma dos numeros de 1 a 100 e: %d\n", soma);

    return 0;
}