#include<stdlib.h>
#include<stdio.h>

int main(){
    float ax, ay, bx, by, altura, largura;

    printf(">>>Digite as coordenadas do ponto A (X e depois Y) :");
    scanf(" %f %f",&ax,&ay);
    printf(">>>Digite as coordenadas do ponto B (X e depois Y) :");
    scanf(" %f %f",&bx,&by);

    altura = abs(ax - bx);
    largura = abs(ay - ay);

    printf("\t===Perimetro = %f===\n", 2 * (altura + largura));

    return 0;
}