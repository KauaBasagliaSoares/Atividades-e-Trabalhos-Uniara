#include <stdio.h>

int main() {
    int cor;

    printf("---------------------------\n");
    printf("Codigo das cores\n");
    printf("1-Vermelho\n");
    printf("2-Verde\n");
    printf("3-Azul\n");
    printf("4-Amarelo\n");
    printf("5-Laranja\n");
    printf("6-Roxo\n");
    printf("7-Branco\n");
    printf("Digite um numero de 1 a 7: \n");
    scanf("%d", &cor);

    switch (cor) {
        case 1:
            printf("A cor escolhida foi: Vermelho\n");
            break;
        case 2:
            printf("A cor escolhida foi: Verde\n");
            break;
        case 3:
            printf("A cor escolhida foi: Azul\n");
            break;
        case 4:
            printf("A cor escolhida foi: Amarelo\n");
            break;
        case 5:
            printf("A cor escolhida foi: Laranja\n");
            break;
        case 6:
            printf("A cor escolhida foi: Roxo\n");
            break;
        case 7:
            printf("A cor escolhida foi: Branco\n");
            break;
        default:
            printf("Numero invalido Digite de 1 a 7\n");
    }

    return 0;
}
