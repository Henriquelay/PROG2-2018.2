#include <stdio.h>
#include <stdlib.h>

void main(){

        int vet[50], acc, i, si , acc2 = 0;

        printf("\tInsira os 50 numeros do vetor:\n");
        
        for(i = 0; i < 50; i++)
        {
            scanf(" %i", &vet[i]);
            acc = 0;

            for(si = 2;si < vet[i] / 2; si++)
            {
                    if(vet[i] % si == 0) acc++;
            }

            if(acc == 0) acc2++;
        }

        printf("=====NUMEROS PRIMOS: %i====\n\n", acc2);
}