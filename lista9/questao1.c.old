#include <stdlib.h>
#include <stdio.h>

int ehMaior(int *a, int *c){
    if(*a > *c) return 1;
    return 0;
}

void fazSwap(int **vet1r, int **vet2r){
    int *swap, *vet1 = *vet1r, *vet2 = *vet2r;

    swap = vet1;
    vet1 = vet2;
    vet2 = swap;
    *vet1r = vet1;
    *vet2r = vet2;    
}

void chegaPraLa(int **vet2r, int *size2, int *indicePartida){
    int *vet2 = *vet2r;
    for(int i = *indicePartida; i < *size2 - 1; i++)
        vet2[i] = vet2[i+1];
    
    *size2--;
    vet2 = (int*) realloc(vet2, sizeof(int) * *size2);
}

void removerOcorDup(int **vet1r, int *size1r, int **vet2r, int *size2r){
    int *vet1 = *vet1r, *vet2 = *vet2r;
    int tamanhofinal = *size2r;

    for(int i = 0; i < *size1r; i++)
        for(int j = 0; j < *size2r; j++)
            if(vet1[i] == vet2[j])
                chegaPraLa(&vet2, size2r, &j);
}

//supondo que cada vetor individualmente não tem repetição
int* uniao(int **vet1r, int **vet2r, int *size1, int *size2){
    int *vet1 = *vet1r, *vet2 = *vet2r;
    if(ehMaior(size2, size1)){
        fazSwap(&vet1, &vet2);
    }
    removerOcorDup(&vet1, size1, &vet2, size2);
    //sizes será atualizado apropriadamente
    int *resultado = (int*) malloc(sizeof(int) * (*size1 + *size2));

    int i = 0;
    for(i; i < *size1; i++)
        resultado[i] = vet1[i];
    for(i; i< *size2; i++)
        resultado[i] = vet2[i];

    return resultado;
}


int main(){
    int *vet1, *vet2, size1, size2;

    puts(">Tamanho do vet 1 e vet 2: ");
    scanf("%i %i", &size1, &size2);

    vet1 = (int*) malloc(sizeof(int) * size1);
    vet2 = (int*) malloc(sizeof(int) * size2);

    for(int i = 0; i < size1; i++){
        printf(">VET1[%i] = ", i);
        scanf("%i", &vet1[i]);
    }
    for(int i = 0; i < size1; i++){
        printf(">VET2[%i] = ", i);
        scanf("%i", &vet1[i]);
    }
    
    int *resposta = uniao(&vet1, &vet2, &size1, &size2);
    
    puts("==RESULTADO:==");
    for(int i = 0; i < (size1 + size2); i++)
        printf("VET[%i] = %i\n", i, resposta[i]);


    free(vet1);
    free(vet2);
}