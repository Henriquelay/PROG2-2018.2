#include <stdlib.h>
#include <stdio.h>

void main(){
        char str[33] = {'\0'};
        int i;

        printf("=*-*OwO*=*-=*-*OwO*=*-=*-*OwO*=*-SUPER REMOVEDOR DE VOGAIS 200.000-*=*-*OwO*=*-=*-*OwO*=*-=*-*OwO*=*-\nInsira string a ser DESVOGALIZADA: ");

        scanf(" %s", str);
        printf("\nResultado: ");
        
        for(i = 0; i < 33; i++){
                // if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != a && 'O' str[i] != 'U') printf(" %c", vet[i]);                

                switch(str[i]){
                        case 'a':
                        case 'A':
                        case 'e':
                        case 'E':
                        case 'i':
                        case 'I':
                        case 'o':
                        case 'O':
                        case 'u':
                        case 'U':
                        break;
                        default: printf("%c", str[i]);
                }
        }
        printf("\nSou foda mesmo\n");
}