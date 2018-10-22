#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int i, j;

void printer(char mat[i][j]){

        for(int x = 0; x < i; x++){
                for(int y = 0; y < j; y++)
                        printf("%c\t", mat[x][y]);
                printf("\n");
        }
        printf("\n\n");
}

void iniciarMatXX(char mat[i][j]){

         for(int x = 0; x < i; x++)
                for(int y = 0; y < j; y++){
                        
                        printf("\nInsira o caractere %ix%i: ", x+1, y+1);
                        scanf(" %c", &mat[x][y]);
                }
        
        printf("\n\n\tMatriz:\n");
        printer(mat);
}

void zeraMat(int mat[i][j]){
        int x, y;
        
        for(x = 0; x < i; x++)
                for(y = 0; y < j; y++)
                        mat[x][y] = 0;
}

int substringLinha(char str[], char mat[i][j]){
        int m, n, x, acc = 0;

        // for(m = 0; m < i; m++)
        //         for(n = 0, acc = 0; n < j - x; n++){
        //                 for(x = 0; str[x] =! '\0'; x++){
        //                         if(mat[m][n + x] == str[x]) acc++;
        //                 }
        //                 if(acc == strlen(str)) return 1;
        //         }
        // return 0;

        char strC[50] = {'\0'};
        
        // for(m = 0; m < i; m++)
        //         for(n = 0; n < j - x; n ++){
        //                 for(x = 0; x < strlen(strC); x++)
        //                         strC[x] = mat[m][n + x];
        //         if(strC == str) return 1;
        //         }

        // return 0;

        
}

void main(){

        printf("Numero de linhas: ");
        scanf(" %i", &i);
        printf("Numero de colunas: ");
        scanf(" %i", &j);

        char mat[i][j];
        char str[50] = {'\0'};

        printf("Palavra: ");
        scanf(" %s", str);       

        printf("\n________________________________________");

        iniciarMatXX(mat);

        if(strlen(str) > j) printf("Eh impossivel caber essa string nas colunas da matriz seu buro");
        else{
                if(substringLinha(str, mat)) printf("Ha pelo menos uma ocorrencia dessa string nas linhas da matriz.");
                else printf("Nao ha essa string nas linhas da matriz.");
        }
        printf("\n________________________________________\n\n");
}