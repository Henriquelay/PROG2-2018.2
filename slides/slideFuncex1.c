#include<stdlib.h>
#include<stdio.h>

int x;

int antecessor(int x);

void main(){

    printf("Digite o #:\n>>>");
    scanf("%d", &x);
    
    printf("Antecessor: %d\n\n", antecessor(x));
}

int antecessor(int x){
    x = x - 1;
    return x;
}