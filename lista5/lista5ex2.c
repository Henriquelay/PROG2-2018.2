#include <stdlib.h>
#include <stdio.h>

void main(){
        int qteLED[10] = {6, 2, 5, 5, 4, 5, 6, 7, 6}, n , acc = 0;
        
        printf("Numero a ser armazenado: ");
        scanf(" %i", &n);

        do{
                acc += qteLED[n % 10];
                n = n / 10;
        }while(n != 0);

        printf("\nN de LEDS: %i\n\n", acc);
}