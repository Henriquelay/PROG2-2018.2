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

int issubstring(char str[], char linha[], int j){
        int x1, x2, acc, f;

        for(f = 0; f < j; f++, acc = 0){
                for(x1 = f, x2 = 0; x1 < strlen(str); x1++, x2++){
                        if(linha[x1] == str[x2]) acc++;
                }
                if(acc == strlen(str)) return 1;
        }
        return 0;
}

int substringLinha(char str[], char mat[i][j]){

        for(int m = 0; m < i; m++)
                if(issubstring(str, mat[m], j)) return 1;

        return 0;        
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