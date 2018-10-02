#include <stdlib.h>
#include <stdio.h>

void main(){

        int x[5] = {0}, y[5] = {0}, i, acc = 0;
        char c;

        for(i = 0; i < 5; i++){
                printf("X] indice %i: ", i);
                scanf(" %d", &x[i]);
        }

        for(i = 0; i < 5; i++){
                printf("Y indice %i: ", i);
                scanf(" %d", &y[i]);
        }

        printf("Insira a operacao:\n S = Soma entre cada elemento de X com o elemento da mesma posicao em Y.\n P = Produto entre cada elemento de X com o elemento da mesma posicao em Y.\n M = Subtracao entre cada elemento de X com o elemento da mesma psoicao em Y.\n I = Intersecao entre X e Y.\n D = Elementos diferente entre X e Y.\n\n >>>");
        scanf(" %c", &c);

        while(1){        

                switch(c){
                        case 'Z' : return;
                        case 'S' :
                                for(i = 0; i < 5; i++){
                                        printf("%i ", x[i] + y[i]);
                                }
                                printf("\n_________________________________________________________\n");
                        break;
                        case 'M' :
                                for(i = 0; i < 5; i++){
                                        printf("%i ", x[i] - y[i]);
                                }
                                printf("\n_________________________________________________________\n");
                        break;
                        case 'I' :
                                for(i = 0; i < 5; i++){
                                        if(x[i] == y[i]) printf("%i ", x[i]);
                                }
                                printf("\n_________________________________________________________\n");
                        break;
                        case 'D' :
                                for(i = 0; i < 5; i++){
                                        if(x[i] != y[i]) printf("%i ", x[i]);
                                }
                                printf("\n_________________________________________________________\n");
                        break;
                        default:
                                printf("Por favor, digite algo valido\n_________________________________________________________\n");
                        break;
                }
        }       
}