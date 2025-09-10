#include <stdio.h>

    int main(){
        int inteiro = 0;
        float flutuante = 0;
        char caracter = 0;

        printf("Digite quantos comodos possue o seu imovel: ");
        scanf("%d", &inteiro);
        printf("Digite o valor de seu imovel: ");
        scanf("%f", &flutuante);
        printf("Digite a rua ou avenida do seu imovel: \n");
        scanf("%s", &caracter);

        printf("O seu imovel possui %d comodos, com o seu valor de %f e esta localizado %s\n", inteiro, flutuante, caracter);

        return 0;
    }