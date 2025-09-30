#include <stdio.h>

int main() {
    int mes;

    printf("Digite um numero de 1 a 12: ");
    scanf("%d", &mes);

    switch (mes) {
        case 1:
            printf("A estação do ano e Verão\n");
            break;
        case 2:
            printf("A estação do ano e Verão\n");
            break;
        case 3:
            printf("A estação do ano e Verão\n");
            break;
        case 4:
            printf("A estação do ano e Outono\n");
            break;
        case 5:
            printf("A estação do ano e Outono\n");
            break;
        case 6:
            printf("A estação do ano e Outono\n");
            break;
        case 7:
            printf("A estação do ano e Inverno\n");
            break;
        case 8:
            printf("A estação do ano e Inverno\n");
            break;
        case 9:
            printf("A estação do ano e Inverno\n");
            break;
        case 10:
            printf("A estação do ano e Primavera\n");
            break;
        case 11:
            printf("A estação do ano e Primavera\n");
            break;
        case 12:
            printf("A estação do ano e Primavera\n");
            break;
        default:
            printf("Numero invalido Digite de 1 a 12\n");
    }

    return 0;
}
