#include<stdlib.h>
#include<stdio.h>

int main(){
    float altura, largura;

    printf(">>>Digite a altura do retangulo :");
    scanf(" %f",&altura);
    printf(">>>Digite a largura do retangulo :");
    scanf(" %f",&largura);

    printf("\t===Perimetro = %f===\n", 2 * (altura + largura));

    return 0;
}