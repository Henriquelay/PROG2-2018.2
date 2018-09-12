#include<stdlib.h>
#include<stdio.h>

int x, y;

int mult(int x, int y);

void main(){

    printf("Entre os numeros para multiplicar: ");
    scanf(" %d %d", &x, &y);

    printf("Multiplicacao entre eles: %d", mult(x, y));
}

int mult(int x, int y){

    x = x * y; 

    return x;
}