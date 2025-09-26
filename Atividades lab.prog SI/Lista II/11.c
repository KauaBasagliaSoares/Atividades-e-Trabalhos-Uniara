#include <stdio.h>
#include <math.h>

int main() {
    int opcao;
    float a, b, resultado;

    printf("=== Calculadora ===\n");
    printf("1 - Quadrado\n");
    printf("2 - Cubo\n");
    printf("3 - Raiz Quadrada\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Digite o numero: ");
    scanf("%f", &a);

    switch (opcao) {
        case 1:
            resultado = a * a;
            printf("Resultado: %f\n", resultado);
            break;
        case 2:
            resultado = a * a * a;
            printf("Resultado: %f\n", resultado);
            break;
        case 3:
            resultado = a / a;
            printf("Resultado: %f\n",sqrt(a));
            break;
        default:
            printf("Opcao invalida\n");
    }

    return 0;
}