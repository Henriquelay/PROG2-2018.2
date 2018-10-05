#include <stdio.h>
#include <stdlib.h>

void quicksort(int mat[5][5], int col, int vet[]){

        int imin, imax, i, j;
        
        for(i = 0; i < col; i++){
                for(j = 0; j < col; j++){
                        switch(i){                                          /* jogando tudo em um vetor normal */
                                case 0:vet[j] = mat[0][j];
                                break;
                                case 1:vet[j + col] = mat[1][j];
                                break;
                                case 2:vet[j + (2 * col)] = mat[2][j];
                                break;
                                case 3:vet[j + (3 * col)] = mat[3][j];
                                break;
                                case 4:vet[j + (4 * col)] = mat[4][j];
                                break;
                                default:
                                printf("\n>>>>>>Algo de errado aconteceu.");
                                break;
                        }
                }
        }
}

void main(){
        int mat[5][5], i, j, lin[25] = {0};
        
        for(i = 0; i < 5; i++){
                for(j = 0; j < 5; j++){
                        scanf(" %i", &mat[i][j]);
                }
        }

        quicksort(mat, 5, lin);

        printf("Matriz: \n");
        
        for(i = 0; i < 5; i++){
                for(j = 0; j < 5; j++){
                        printf("%i\t", mat[i][j]);
                }
                printf(";\n");
        }        

        printf("Vetor: ");
        for(i = 0; i < 25; i++){
                printf("%i ", lin[i]);
        }
        printf("\n\n____________________________________________________");

}