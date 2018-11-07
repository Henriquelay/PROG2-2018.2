#include <stdio.h>
#include <stdlib.h>

int pizzaSteiner(int cortes){
    if( cortes == 0 ) return 1;
    else{
    return(cortes + pizzaSteiner(cortes - 1));
    }
}

void main(){
    int cortes;
    scanf("%i", &cortes);
    printf("Numero de pedaços: %i\n\n", pizzaSteiner(cortes));
}