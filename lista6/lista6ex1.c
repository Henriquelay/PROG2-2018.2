#include <stdlib.h>
#include <stdio.h>

void main(){
        int i, j, x, y;

        printf("Numero de linhas: ");
        scanf(" %i", &i);
        printf("Numero de colunas: ");
        scanf(" %i", &j);

        int mat[i][j];

        printf("\n________________________________________");

        for(x = 0; x < i; x++){
                for(y = 0; y < j; y++){
                        printf("\nInsira o numero %ix%i: ", x+1, y+1);
                        scanf(" %i", &mat[x][y]);
                }
        }

        printf("\n\n\t\tMatriz:\n");

        for(x = 0; x < i; x++){
                for(y = 0; y < j; y++){
                        printf("%i\t", mat[x][y]);
                }
                printf("\n");
        }

        printf("\n\n");
}