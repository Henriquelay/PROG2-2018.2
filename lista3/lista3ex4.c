#include<stdlib.h>
#include<stdio.h>

int main(){
    int a, b;
    char c;


    do{
    printf("Digite os dois numeros a serem dividos. Dividendo e divisor: ");
    scanf(" %d %d", &a, &b);

        while(b == 0){
            printf("DIVISOR INVALIDO. INSIRA OUTRO VALOR: ");
            scanf(" %d", &b);
        }

    printf(" %f", (float) a/b);

    printf("DESEJA REALIZAR OUTRO CALCULO? (S/N): ");
    scanf(" %c", &c);

    }while(c == 'S');

    printf("\n\n");
    return 0;
}