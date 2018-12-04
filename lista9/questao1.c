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

int *boaSort(int *sortear, int tam)
{
    int aux;
    int *ordenado = sortear;
    
    for (int j = 0; j < tam; j++)
        for (int i = 0; i < tam - 1; i++)
            if (ordenado[i] > ordenado[i + 1]){
                aux = ordenado[i];
                ordenado[i] = ordenado[i + 1];
                ordenado[i + 1] = aux;
            }
    
    return ordenado;
}

int* uniao(int *x1, int *x2, int n1, int n2, int *qtd){
    int* result = concatInt(x1, x2, n1, n2, qtd);
    removeRepet(result,qtd);

    return result;
}

/* A escola de magia Hogwarts foi reforçada com um professor de Ccomp.
Ao voltar das férias, os alunos aprenderiam Lógica e Álgebra de Bole para aperfeiçoar sua capacidade de raciocínio. Na primeira aula, o novo professor explicou formalização de proposições em linguagem natural para álgebra de Boole, simplificação de expressões booleanas e projeto de circuitos lógicos.
Para verif se os alunos apreender, ele aplicou um feitiço que congelou Ronie. O professor então passou o seguinte desafio:
nie será descongelado se Dumbledore estiver em Hogwarts ou o professor Severo der aula de feitiços aquáticos nesse semestre não tirar uma nota abaixo de sete no exercício de álgebra de Boole; ou o time de Harry vencer o jogo de quadribol e o professo Severo der aula de feitiços aquáticos nesse semestre; ou não for verdade que Dumbledore não estiver em Hogwarts e o professor Severo não der aula de feitiços aquáticos nesse semestre; ou o time de Harry vencer o próximo jogo de quadribol e Hermione não tirar uma nota abaixo de sete no exercício de álgebra de Boo.
Para a verificação seria preciso implementar um circuito lógico que calcusa quando Ronie seria descongelado. Para isso os alunos irão dispor de uma porta OR e uma AND (inversores à vontade).
Pergunta-se: como Harry Potter conseguiria descongelar Ronie usando a álgebra de Boole?*/

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

    int *tamResult = (int*) malloc(sizeof(int));
    *tamResult = tamVet[0] + tamVet[1];
    int *vetResult = uniao(vet1, vet2, tamVet[0], tamVet[1], tamResult);

    free(vet1);

    vetResult = boaSort(vetResult, *tamResult);

    free(vet2);
    
    printf("\nResultado da uniao:\n");
    for(int i = 0; i < *tamResult; i++)
        printf("%i ", vetResult[i]);
    puts("");



    free(tamResult);
    free(vetResult);
    return 0;
}
