#include <stdio.h>

    int main(){
        int nota1 = 0;
        int nota2 = 0;

        printf("Digite a primeira nota \n");
        scanf("%d", &nota1);
        printf("Digite a segunda nota \n");
        scanf("%d", &nota2);

        int soma = nota1 + nota2;
        int media = soma / 2;

        if (media > 6)
        {
          printf("O aluno foi aprovado com media %d ", media);
        }
        else
        {
            printf("O aluno foi reprovado com media %d ", media);
        }
    
                return 0;
    }