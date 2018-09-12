#include<stdlib.h>
#include<stdio.h>

int a, b, c;
float x;

float media(int a, int b, int c);

void main(){

    printf("Entre os 3 numeros para serem calculados a media: ");
    scanf(" %d %d %d", &a, &b, &c);

    printf("Media aritmetica: %.2f", media(a, b, c));
}

float media(int a , int b, int c){

    x = (a + b + c) / 3;

    return x;
}