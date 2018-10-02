                        /* Definindo a soma para numeros na sequência de Fibonacci por recursividade */

#include <stdlib.h>
#include <stdio.h>

int a = 1, b = 1, z;            /*a == primeiro n da sequencia, b == segundo n do passo, z == variavel de swap*/

int jordana(int d){

        if(d == 1) return 1 ;
        else if(d == 0) return 0;

        else{

                z = a + b;      /*guardando valor da soma (sera o primeiro numero da proxima instancia*/
                a = b;          /*shiftando a direita*/
                b = z;          /*pegando o valor guardado*/

                return jordana(d - 2) + jordana(d - 1);
        }

}

void main(){
        int n, x, z;

        printf("Indice na seq Fibonacci: ");
        scanf(" %i", &n);

        x = jordana(n);
        printf("\nValor = %i\n", x);
        
        for(z = 0, x = 0; z <= n; z++){
                x += jordana(z);
        }

        printf("Soma ate o numero digitado: %i\n\n", x);

}