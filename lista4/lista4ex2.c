#include<stdlib.h>
#include<stdio.h>

void main(){
    int n, acc;

    printf("Tamanho da lista: ");
    scanf(" %i", &n);

    int vet[n], i;

    for(i = 0, acc = 0; i < n; i++){

    n += vet[i];
    }
    printf("%i\n\n", n);

}