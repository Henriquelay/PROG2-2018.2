#include <stdlib.h>
#include <stdio.h>

int* concatInt(int *x1, int *x2, int n1, int n2, int *qtd){
    int* result = (int*) malloc(sizeof(int) * (n1 + n2));

    int i = 0;
    for(i ; i < n1; i++)
        result[i] = x1[i];
    *qtd = n1+n2;
    for(i; i < *qtd; i++)
        result[i] = x2[i - n1];

    return result;
}

void chegaPraLa(int *vet, int *tam, int i, int j){

    //continuar
}

void removeRepet(int *vet, *tam){
    for(int i = 0; i < *tam; i++){
        for(int j = 0; j < *tam; j++){
            if(i == j) continue;
            if(vet[i] == vet[j]) chegaPraLa(vet, tam, i, j);
        }
    }
}


int* uniao(int *x1, int *x2, int n1, int n2, int *qtd){
    int* result = concatInt(x1, x2, n1, n2, qtd);

    void removeRepet(result,qtd);

    return result;
}



int main(){
    int tamVet[2];


    puts("Tamanho vetor 1 e 2: ");
    scanf("%i %i", &tamVet[0], &tamVet[1]);

    int *vet1 = (int*) malloc(sizeof(int) * tamVet[0]);
    int *vet2 = (int*) malloc(sizeof(int) * tamVet[1]);

    int tamResult;
    int *vetResult = uniao(vet1, vet2, tamVet[0], tamVet[1], &tamResult);

    free(vet1);
    free(vet2);

    puts("Resultado da uniao:\n");
    for(int i = 0; i < tamResult; i++)
        printf("%i ", vetResult[i]);

    free(vetResult);
    return 0;
}