#include <stdlib.h>
#include <stdio.h>

void main(){
        int vet[50], i;

        for(i = 0; i < 50; i++){
                vet[i] = (i + 5 * i) % (i + 1);
        }
        
        printf("\n");
        for(i = 0; i < 50; i++){
                printf("%i ", vet[i]);
        }

        printf("\n\n");
}