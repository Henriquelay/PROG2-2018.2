#include<stdlib.h>
#include<stdio.h>

int a, pa, b, pb, px, py;
float x, y, z;

float mediaPond(int a, int pa, int b, int pb, float x, int px, float y, int py);

void main(){
    
    printf("O numero seguido de seu peso, para os inteiros: ");
    scanf(" %d %d %d %d", &a, &pa, &b, &pb);

    printf("O numero seguido de seu peso, para os reais: ");
    scanf(" %f %d %f %d", &x, &px, &y, &py);

    printf("Media ponderada entre eles = %.2f\n\n", mediaPond(a, pa, b, pb, x, px, y, py));
}

float mediaPond(int a, int pa, int b, int pb, float x, int px, float y, int py){

    z = (a * pa + b * pb + x * px + y * py )/(pa + pb + px + py);

    return z;
}