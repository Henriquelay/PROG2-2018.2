#include<stdlib.h>
#include<stdio.h>

int binario(int in, int i, int vet[]){

        /* if(in == 0){
                vet[i] = 2;
                return;
        } else{
                vet[i] = in % 2;
                in = in / 2;
                i++;
                binario(in, i, vet);
        } */

        for(i = 0; i < 33; i++){
                if(in == 0){
                        vet[i] = 2;
                        return i;
                } else{
                        vet[i] = in % 2;
                        in = in / 2;
                }
        }

}


void main(){

        int i = 0, vet[33] = {0}, in, acc;

        printf("Numero a ser convertido:");
        scanf("%i", &in);

        printf(">>Numero em binario: ");

        i = binario(in ,i, vet);
        
        for(acc = i - 1; acc > -1; acc--){
                printf("%i", vet[acc]);
        }
        
        printf("\n>>Numero de bits: %i\n\n\n", i);
}