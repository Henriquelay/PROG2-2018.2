#include<stdlib.h>
#include<stdio.h>



void main(){
    int e, i;
    scanf(" %d", &e);

    int x[e];

    for(i=0;i<e;i++){
       scanf(" %i", &x[i]);
    }

    printf("\n\n");

    for(i=0;i<e;i++){
        printf("%i ", x[i]);
    }

    printf("\n\n");
}