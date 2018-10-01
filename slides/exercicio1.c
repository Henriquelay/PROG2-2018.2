#include<stdio.h>
#include<stdlib.h>

int main(){
    float raio, pi = 3.14159, result;

    printf("Insira o raio do circulo : ");
    scanf("%f",&raio);
    result = raio*raio*pi;
    printf("%f e a area do circulo\n",result);
    return 0;
    }