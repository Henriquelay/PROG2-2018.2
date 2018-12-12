#include <stdlib.h>
#include <stdio.h>

typedef struct vetor{
	int tamanho, *lista;
} Vetor;

int main(){
	Vetor vet1, vet2;

	puts("Tamanho do vetor 1: ");
	scanf("%i", &(vet1.tamanho));
	puts("Tamanho do vetor 2: ");
	scanf("%i", &(vet2.tamanho));

	vet1.lista = (int*) malloc(sizeof(int) * vet1.tamanho);
	vet2.lista = (int*) malloc(sizeof(int) * vet2.tamanho);

	puts("Vetor 1: ");
	for(int i = 0; i < vet1.tamanho; i++)
		scanf("%i", &(vet1.lista[i]));
	for(int i = 0; i < vet2.tamanho; i++)
		scanf("%i", &(vet2.lista[i]));



}
