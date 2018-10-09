#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void printer(int j, char str1[], char str2[]){
        int i;

        for(i = 0; i < j; i++){
                printf("%c", str1[i]);
                printf("%c", str2[i]);
        }
}

void main(){
        char str1[51], str2[51], strR[101];
        int i, j;

        for(i = 0; i < 51; i++){     //Iniciando as str's vazia
            str1[i] = '\0';
            str2[i] = '\0';
        }

        printf("Str1 e Str2:\n");
        scanf(" %s %s", str1, str2);
        
        j = (strlen(str1) < strlen(str2)) ? strlen(str2) : strlen(str1);

        printf("Valor de J : %i", j);

        printf("\n\nResultado:\n");

        printer(j, str1, str2);

        printf("\n___________________________________\n\n");
}