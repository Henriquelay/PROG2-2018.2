#include <stdlib.h>
#include <stdio.h>

int* concatInt(int *x1, int *x2, int n1, int n2, int *qtd){
    int* result = (int*) malloc(sizeof(int) * (n1 + n2));
    int i = 0;
    for(;i < n1; i++){
        result[i] = x1[i];
    }
    for(;i < *qtd; i++){
        result[i] = x2[i - n1];
    }

    puts("");
    puts("Primeiro concat");
    for(int lk = 0; lk < *qtd; lk++){
        printf("Result[%i] = %i", lk, result[lk]);
        puts("");
    }

    return result;
}

int* chegaPraLa(int *vet, int *tam, int j){
    (*tam)--;
    for(int i = j; i < *tam; i++){
        vet[i] = vet[i+1];
    }
    
    int *result = vet;
    result = (int*) realloc (result, sizeof(int) * *tam);

    puts("");
    for(int lk = 0; lk < *tam; lk++){
        printf("Result[%i] = %i", lk, result[lk]);
        puts("");
    }

    return result;
}

void removeRepet(int *vet, int *tam){
    for(int i = 0; i < *tam; i++)
        for(int j = 0; j < *tam; j++){
            if(i == j) continue;
            if(vet[i] == vet[j]) vet = chegaPraLa(vet, tam, j);
        }
}

int* uniao(int *x1, int *x2, int n1, int n2, int *qtd){
    int* result = concatInt(x1, x2, n1, n2, qtd);
    removeRepet(result,qtd);

    return result;
}
void boaSort(int *sortear, int *sortido, int n)

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
    int *vetResult = uniao(vet1, vet2, tamVet[0], tamVet[1], tamResult);

    free(vet1);
    free(vet2);

    printf("\nResultado da uniao:\n");
    for(int i = 0; i < *tamResult; i++)
        printf("%i ", vetResult[i]);
    puts("");
    free(tamResult);
    free(vetResult);
    return 0;
}

/*
Result[0] = 1
Result[1] = 3
Result[2] = 4
Result[3] = 6
Result[4] = 7
Result[5] = 1
Result[6] = 3
Result[7] = 4
Result[8] = 6
Result[9] = 8

Result[0] = 1
Result[1] = 3
Result[2] = 4
Result[3] = 6
Result[4] = 7
Result[5] = 3
Result[6] = 4
Result[7] = 6
Result[8] = 6

*/