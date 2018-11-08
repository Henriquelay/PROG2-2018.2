#include <stdlib.h>
#include <stdio.h>

int existeEm(int x1, int* x2, int n2){
        for(int x = 0; x < n2; x++)
            if(x1 == x2[x]) return 1;

    return 0;
}

int* uniao(int* x1, int* x2, int n1, int n2, int* qtd){
    *qtd = n1 + n2;
    
    for(int i = 0; i < n1; i++){
        if(existeEm(x1[i], x2, n2)) *qtd--;
        else{
            *qtd++;
        }
    }
}