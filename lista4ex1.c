#include <stdlib.h>
#include <stdio.h>
#include <string.h>


void binario(int x, int y, int vet[]);

void main(){
    int in;
    int vet[33] = {0}, i = 0;

    printf("Digite o N inteiro:");
    scanf(" %i", &in);
    
    binario(in, 0, vet);

    printf("\n>>>Binario = ");
    while(vet[i] != 2){
        printf("%i ", vet[i]);
        i++;
    }
    printf("\n\n");
}

void binario(int x, int y, int vet[]){

    if(x == 0){
        vet[y] = 2;
        return;
        } else{
    vet[y] = x % 2;
    printf(";;%d", vet[y]);
    x = x/2;
    printf("::%d", x);
    binario(x, y++, vet);
    }
}