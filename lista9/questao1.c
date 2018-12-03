]#include <stdlib.h>
#include <stdio.h>

int* concatInt(int *x1, int *x2, int n1, int n2, int *qtd){
    int* result = (int*) malloc(sizeof(int) * (n1 + n2));
    printf("TAM \n===== %i\n", *qtd);
    int i = 0;
    for(i ; i < n1; i++)
        result[i] = x1[i];
    for(i; i < *qtd; i++)
        result[i] = x2[i - n1];

    return result;
}

int* chegaPraLa(int *vet, int *tam, int j){
    *tam--;
    for(int i = j; i < *tam; i++)
        vet[i] = vet[i+1];
    
    printf("TAM O PORRA\n===== %i\n", *tam);
    int *result = (int*) malloc(sizeof(int) * *tam);
    for(int i = 0; i < *tam; i++)
        result[i] = vet[i];
    free(vet);

    return result;
}

void removeRepet(int *vet, int *tam){
    printf("TAM \n===== %i\n", *tam);
    for(int i = 0; i < *tam; i++)
        for(int j = 0; j < *tam; j++){
            if(i == j) continue;
            if(vet[i] == vet[j]) vet = chegaPraLa(vet, tam, j);
        }
}

int* uniao(int *x1, int *x2, int n1, int n2, int *qtd){
    printf("TAM \n===== %i\n", *qtd);
    int* result = concatInt(x1, x2, n1, n2, qtd);
    printf("TAM \n===== %i\n", *qtd);
    removeRepet(result,qtd);

    return result;
}



int main(){
    int tamVet[2];

    puts("Tamanho vetor 1 e 2: ");
    scanf("%i %i", &(tamVet[0]), &(tamVet[1]));

    int *vet1 = (int*) malloc(sizeof(int) * tamVet[0]);
    int *vet2 = (int*) malloc(sizeof(int) * tamVet[1]);

    for(int i = 0; i < tamVet[0]; i++){
        printf("Vet1[%i]: ", i + 1);
        scanf("%i", &vet1[i]);
    }
    for(int i = 0; i < tamVet[1]; i++){
        printf("Vet2[%i]: ", i + 1);
        scanf("%i", &vet2[i]);
    }

    int* tamResult = (int*) malloc(sizeof(int));
    *tamResult = tamVet[0] + tamVet[1];
    printf("TAM conteudo \n===== %i\n", tamResult);
    int *vetResult = uniao(vet1, vet2, tamVet[0], tamVet[1], tamResult);

    free(vet1);
    free(vet2);

    puts("Resultado da uniao:");
    for(int i = 0; i < *tamResult; i++)
        printf("%i ", vetResult[i]);

    free(tamResult);
    free(vetResult);
    return 0;
}