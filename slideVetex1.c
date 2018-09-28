#include<stdlib.h>
#include<stdio.h>

void main(){
    float nota[10], soma;
    int i;

    printf("Insira as 10 notas\n ");

    for(i=0;i<10;i++){

        printf(">>Nota numero %d: ", i+1);
        scanf(" %f", &nota[i]);
        soma += nota[i];
    }

    soma = soma / 10;  /* usando SOMA como media para poupar uma variável*/

    printf("Notas maiores que a media: \n");
    for(i=0;i<10;i++){

        if (nota[i] >= soma) printf("Nota %d, : %.2f\n", i, nota[i]);
    }


    printf("\n\n");
}