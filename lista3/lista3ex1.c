#include<stdlib.h>
#include<stdio.h>

int main(){
    float km = 0, acc = 0;
    int i = 0, i0 = 0;
    char a;

    do{
        printf("Quilometragem: ");
        scanf(" %f",&km);

        while (km <= 0){
            i0++;
            printf("\nEntre apenas quilometragens validas!");
            scanf(" %f", &km);
        }

        acc = acc + km;
        i++;

        printf("\nDeseja realizar outra consulta? (S/N) ");
        
        scanf(" %c",&a);

        while (a != 'S' || a != 'N'){
            i0++;
            printf("\nEntre apenas S ou N! ");
            scanf(" %c", &a);
        }
    }while (a == 'S');

    printf("\n\n======BREAKDOWN======\nNumero de carros : %d\nQuilometragem total : %f\nEntradas invalidas : %d", i, acc, i0);
    
    printf("\n\n");
    return 0;
}

int teste(float x){

    return 5;
}