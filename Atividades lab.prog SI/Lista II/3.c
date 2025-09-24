#include <stdio.h>

    int main(){
        int val1; int val2; int val3;

        printf("Digite o primeiro valor: \n");
        scanf("%d", &val1);
        printf("Digite o segundo valor: \n");
        scanf("%d", &val2);
        printf("Digite o terceiro valor: \n");
        scanf("%d", &val3);

        if (val1 > val2 && val2 > val3)
        {
            printf("A ordem dos numeros do maior ao menor ficou assim %d, %d e %d", val1, val2, val3);
        } else if (val1 > val3 && val3 > val2) {
            printf("A ordem dos numeros do maior ao menor ficou assim %d, %d e %d", val1, val3, val2);
        } else if (val2 > val1 && val1 > val3) {
            printf("A ordem dos numeros do maior ao menor ficou assim %d, %d e %d", val2, val1, val3);
        } else if (val2 > val3 && val3 > val1) {
            printf("A ordem dos numeros do maior ao menor ficou assim %d, %d e %d", val2, val3, val1);
        } else if (val3 > val1 && val1 > val3) {
            printf("A ordem dos numeros do maior ao menor ficou assim %d, %d e %d", val3, val1, val2);
        } else if (val3 > val2 && val2 > val1) {
            printf("A ordem dos numeros do maior ao menor ficou assim %d, %d e %d", val3, val2, val1);
        }
        

        return 0;
    }