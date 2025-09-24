#include <stdio.h>

    int main(){
        int idade;

        printf("Digite a sua idade(Nao pode mentir, posso ver sua camera): \n");
        scanf("%d", &idade);

        if (idade <= 17)
        {
            printf("Voce e um menor de idade!");
        }   else if (idade >= 18 && idade <= 59)
        {
            printf("Voce e um adulto!");
        }   else if (idade >= 60)
        {
            printf("Voce e um idoso!");
        }
        
    return 0;
    }