#include<stdlib.h>
#include<stdio.h>



int teste(float x){
    int j;
    j = x * 2;
    return j;
}

int main(){
    float km = 0, acc = 0;
    int i = 0, i0 = 0;
    char a;

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



    printf("\n\n======BREAKDOWN======\nNumero de carros : %d\nQuilometragem total : %f\nEntradas invalidas : %d\n", i, acc, i0);
    printf("%d", teste(km));
    
    printf("\n\n");
    return 0;
}