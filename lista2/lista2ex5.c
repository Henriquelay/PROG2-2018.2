#include<stdlib.h>
#include<stdio.h>

int main(){
    int x, y, swap;

    printf("\n>>>Digite os dois numeros a serem MDCzados: ");
    scanf(" %d %d",&x,&y);

    do{
        if (y>x){
        swap = x;
        x = y;
        y = swap;
        }
        if (y == 0){
            break;       
        }

        x = x - y;
    }while(y != 0);

    printf(">>>MDC = %d\n\n", x);

    return 0;
}