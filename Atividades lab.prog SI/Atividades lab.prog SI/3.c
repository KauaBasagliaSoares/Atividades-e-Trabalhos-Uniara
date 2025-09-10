#include <stdio.h>

    int main(){
        int v1 = 0;
        int v2 = 0;

        printf("Digite o primeiro valor \n");
        scanf("%d", &v1);
        printf("Digite o segundo valor \n");
        scanf("%d", &v2);

        if (v1 > v2)
        {
          printf("O maior numero e o %d ", v1);
        }
        else
        {
            printf("O maior numero e o %d ", v2);
        }
    
                return 0;
    }