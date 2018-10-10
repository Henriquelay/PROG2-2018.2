#include <stdlib.h>
#include <stdio.h>

int i, j;

void iniciarMatXX(int mat[i][j]){
        int x, y;

         for(x = 0; x < i; x++){
                for(y = 0; y < j; y++){
                        printf("\nInsira o numero %ix%i: ", x+1, y+1);
                        scanf(" %i", &mat[x][y]);
                }
        }
        printf("\n");
}

void printer(int mat[i][j]){
        int x, y;

        for(x = 0; x < i; x++){
                for(y = 0; y < j; y++){
                        printf("%i\t", mat[x][y]);
                }
                printf("\n");
        }
        printf("\n\n");
}

void printerTrans(int mat[j][i]){
        int x, y;

        for(x = 0; x < i; x++){
                for(y = 0; y < j; y++){
                        printf("%i\t", mat[x][y]);
                }
                printf("\n");
        }
        printf("\n\n");
}

void transpose(int mat[i][j]){
        int mat2[j][i], x, y;

        for(x = 0; x < j; x++){
                for(y = 0; y < i; y++){
                        mat2[y][x] = mat[x][y];
                }
        }
        
        printerTrans(mat2);
}

void main(){
        int x, y;

        printf("Numero de linhas: ");
        scanf(" %i", &i);
        printf("Numero de colunas: ");
        scanf(" %i", &j);

        int mat[i][j];

        printf("\n________________________________________");
        iniciarMatXX(mat);
        printf("\n\t\tMatriz:\n");
        printer(mat);

        printf("\n\t\tTransposta:\n");
        transpose(mat);
}