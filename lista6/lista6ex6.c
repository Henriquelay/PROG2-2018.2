#include <stdlib.h>
#include <stdio.h>

int i, j;

void printer(int mat[i][j]){

        for(int x = 0; x < i; x++){
                for(int y = 0; y < j; y++)
                        printf("%i\t", mat[x][y]);
                printf("\n");
        }
        printf("\n\n");
}

void iniciarMatXX(int mat[i][j]){

         for(int x = 0; x < i; x++)
                for(int y = 0; y < j; y++){
                        
                        printf("\nInsira o numero %ix%i: ", x+1, y+1);
                        scanf(" %i", &mat[x][y]);
                }
        
        printf("\n\n\t\tMatriz:\n");
        printer(mat);
}

void multMat(int mat1[i][j], int mat2[i][j], int matR[i][j]){
        int acc, x, y, z;

        for(x = 0; x < i * j; x++) matR[0][x] = 0;

        for(y = 0; y < i; y++)
		for(x = 0; x < j; x++)
			for(z = 0; z < j; z++)
				matR[y][x] += mat1[y][z] * mat2[z][x];
}

void zeraMat(int mat[i][j]){
        int x, y;
        
        for(x = 0; x < i; x++)
                for(y = 0; y < j; y++)
                        mat[x][y] = 0;
}

void main(){

        printf("Numero de linhas: ");
        scanf(" %i", &i);
        printf("Numero de colunas: ");
        scanf(" %i", &j);

        int mat1[i][j], mat2[i][j];

        printf("\n________________________________________");

        iniciarMatXX(mat1);
        iniciarMatXX(mat2);

        int matR[i][j];

        zeraMat(matR);

        multMat(mat1, mat2, matR);

        printf("\n\t\tResultado:\n");
        printer(matR);

        printf("\n\n");
}