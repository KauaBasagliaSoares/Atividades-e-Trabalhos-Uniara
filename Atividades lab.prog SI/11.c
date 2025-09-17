#include <stdio.h>

int main() {
    int opcao;
    float a, b, resultado;

    printf("=== Calculadora ===\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    switch (opcao) {
        case 1:
            resultado = a + b;
            printf("Resultado: %f\n", resultado);
            break;
        case 2:
            resultado = a - b;
            printf("Resultado: %f\n", resultado);
            break;
        case 3:
            resultado = a * b;
            printf("Resultado: %f\n", resultado);
            break;
        case 4:
            if (b != 0) {
                resultado = a / b;
                printf("Resultado: %f\n", resultado);
            } else {
                printf("Erro: divisao por zero\n");
            }
            break;
        default:
            printf("Opcao invalida\n");
    }

    return 0;
}
