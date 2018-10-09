#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main(){
        int i, r; 
        char cod[50] = {'\0'};

        printf("\nMensagem codificada: ");
        scanf(" %s", cod);
        printf("Nro de rotate: ");
        scanf(" %i", &r);

        printf("\n");

        r = r % 26;

        for(i = 0; i < 50; i++){
                if(cod[i] == '\0') continue;
                cod[i] += (cod[i] - r < 65) ? -r + 26: -r;
                printf("%c", cod[i]);
        }

        printf("\n\n");
}