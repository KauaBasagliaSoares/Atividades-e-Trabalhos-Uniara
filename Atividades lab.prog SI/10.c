#include <stdio.h>

int main() {
    int num;

    printf("Digite numeros inteiros digite 0 para sair: \n");
    scanf("%d", &num);

    while (num != 0) {
        printf("Voce digitou: %d\n", num);
        scanf("%d", &num);
    }

    printf("Programa encerrado\n");

    return 0;
}
