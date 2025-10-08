#include <stdio.h>

    void soma(int a, int b){
        int sum = a + b;
        printf("A soma de %d e %d e %d\n", a, b, sum);
    }

    int main() {
    int a = 5;
    int b = 10;
    soma(a, b);
    return 0;
}