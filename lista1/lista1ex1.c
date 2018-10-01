#include<stdlib.h>
#include<stdio.h>

int main(){
    int cod;
    float qte;

    printf("Insira o codigo do produto\n1 -> Alcool\n2 -> Gasolina\n");
    scanf(" %d",&cod);
    printf("Insira a quatidade de produto (em litros) : ");
    scanf(" %f",&qte);

    switch (cod){
        case 1:
            printf("Valor final : %.2f\n",qte*2.83);
            break;
        case 2:
            printf("Valor final : %.2f\n",qte*3.15);
            break;
    }
    return 0;
}