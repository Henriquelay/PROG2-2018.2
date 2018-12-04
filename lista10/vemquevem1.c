/* 1) Considerando a estrutura
struct Vetor{
float x;
float y;
float z;
};
para representar um vetor no R3, implemente um programa que calcule a soma de dois vetores
e imprima o resultado. */

#include <stdio.h>
#include <stdlib.h>

struct Vetor{
    float x;
    float y;
    float z;
};

typedef struct Vetor vetor;

void leVetR3(vetor *v)
{
    printf("Informe o valor x do vetor:\n");
    scanf("%f", &(v->x));

    printf("Informe o valor y do vetor:\n");
    scanf("%f", &(v->y));

    printf("Informe o valor z do vetor:\n");
    scanf("%f", &(v->z));
}

void printaVetR3(vetor *v)
{
    printf("Vetor R3:\n");
    printf("x: %g y: %g z: %g\n", v->x, v->y, v->z);
}

vetor sorvet(vetor *v1, vetor *v2)
{
    vetor v3;

    v3.x = v1->x + v2->x;
    v3.y = v1->y + v2->y;
    v3.z = v1->z + v2->z;

    return v3;    
}

int main()
{
    vetor v1, v2;

    puts("Vetor 1");
    leVetR3(&v1);
    puts("Vetor 2");
    leVetR3(&v2);

    printaVetR3(&v1);
    printaVetR3(&v2);

    puts("Vetor 3");
    vetor v3 = sorvet(&v1, &v2);
    printaVetR3(&v3);
    puts("puts");

    return 0;
}
