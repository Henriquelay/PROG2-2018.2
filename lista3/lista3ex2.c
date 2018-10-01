#include<stdlib.h>
#include<stdio.h>

int main(){

    int a = 0, n = 0, acc = 0;

    printf("Insira o numero A e depois o numero N, para ser somado os N numeros partindo de A: ");
    scanf(" %d %d", &a, &n);

    while(n<=0){
        printf("Por favor insira um valor de N maior ou igual a zero: ");
        scanf(" %d", &n);
    }

    while(n > 0){
        acc = acc + a;
        a = a + 1;

        n = n - 1;
    }

    printf("Resultado da soma: %d", acc);

    printf("\n\n");
    return 0;
}