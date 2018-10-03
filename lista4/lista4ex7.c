#include <stdlib.h>
#include <stdio.h>

int checa(int num, int vet[], int index){

        int i, acc;

        for(i = 0, acc = 0; i < index; i++){
            
                if(num == vet[i]) acc++;
        }
        return acc;
}

void main(){

        int vet[10], i;

        for(i = 0; i < 10; i++){
                printf("Insira o numero %i: >>>", i);
                scanf(" %i", &vet[i]);

                while(checa(vet[i], vet, i) > 0){
                        printf("Entrada invalida, esse numero ja foi entrado. Digite outro numero: >>>");
                        scanf(" %i", &vet[i]);
                }
        }
        printf("\nResultado: ");
        for(i = 0; i < 10; i++){
                printf("%i", vet[i]);
        }
        printf("\n_______________________________________\n\n\n\n");
}