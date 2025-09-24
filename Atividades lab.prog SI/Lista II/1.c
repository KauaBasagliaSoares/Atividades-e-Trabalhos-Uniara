#include <stdio.h>

    int main(){
        int val1;
        double val2;
        int soma;
        
        printf("Digite o primeiro valor da soma: \n" );
        scanf("%d", &val1);
        printf("Digite o segundo valor da soma: \n" );
        scanf("%lf", &val2);

        soma = val1 + val2;
        printf("A soma dos numeros foi de %d ", soma);
    
        return 0;
    }
    