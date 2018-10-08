#include <stdlib.h>
#include <stdio.h>
#include <strings.h>

void main(){
        char c, str[256];

        printf("Escreve a opcao: ");
        scanf(" %c", &c);

        switch(c){
                case 'a':
                        printf("Digite o vetor: \n");
                        // getchar(     );
                        fgets(str , sizeof(str), stdin);
                        printf("\n%s\n", str);

                break;
        }
}