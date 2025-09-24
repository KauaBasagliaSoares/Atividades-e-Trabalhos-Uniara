#include <stdio.h>

    int main(){
        int val;

        printf("Digite qualquer numero: \n");
        scanf("%d", &val);

        if (val >= 1)
        {
            printf("O numero e positivo");
        }   else if (val == 0)
        {
            printf("O numero e o zero");
        }   else 
        {
            printf("O numero e negativo");
        }
        
    return 0;
    }