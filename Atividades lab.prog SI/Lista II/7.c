#include <stdio.h>

    int main(){
        int num;
        int tab;

        printf("Digite a tabuada de qualquer numero: \n");
        scanf("%d", &num);
        printf("A tabuada do %d:\n", num);

        for (tab = 1; tab <= 12; tab++)
        {
            printf("%d x %d = %d\n", num, tab, num * tab);
        }
        

    return 0;
    }