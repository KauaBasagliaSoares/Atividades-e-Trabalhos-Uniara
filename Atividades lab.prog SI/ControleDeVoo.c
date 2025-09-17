#include <stdio.h>

    int main(){
        int min;
        int i;
        int comb;
        int alt = 0;
        int vel;

        printf("Insira quantos minutos de voo deseja simular\n");
        scanf("%d", &min);
        printf("Insira a quantidade de combustivel inserido\n");
        scanf("%d", &comb);
        printf("-----------------\n");

        for (i = 1; i <= min; i++)
        {   
            comb = comb - 5;
           
        if (alt < 1000)
        {
            alt = alt + 100;
        }

        if (vel < 250)
        {
            vel = vel + 50;
        }
            
            printf("Minuto: %d, Combustivel %d, Altura: %dm, Velocidade: %dkm/h \n", i, comb, alt, vel);

        if (comb == 0)
        {
            printf("Alerta: Combustivel esgotado! Iniciando pouso de emergencia");
            break;
        }
        }
        return 0;
    }