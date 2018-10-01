#include<stdlib.h>
#include<stdio.h>

float x, a, b, c;

float media(float a, float b, float c);

void main(){

    printf("Entre os 3 numeros para serem calculados a media: ");
    scanf(" %f %f %f", &a, &b, &c);

    printf("Media aritmetica: %.2f", media(a, b, c));
    printf("\n\n");
}

float media(float a , float b, float c){

    x = (a + b + c) / 3;
    
    return x;
}