#include<stdio.h>
#include<stdlib.h>

int main(){
    int a = 1, b = 0, c = 0, d = 1, t = 0, num = 0;
    num = 1000 * a + 100 * b + 10 * c + d;

    printf("Numeros com a propriedade estranha: \n");

    while(num < 9999){
        t = 10 * a + 10 * c + b + d;
        if (t * t == num){
            printf("%d ,", num);
        }

       d = d + 1; 

       if (d >= 10){
           d = d - 10;
           c = c + 1;
       }

       if (c >= 10){
           c = c - 10;
           b = b + 1;
       }

       if(b >= 10){
           b = b - 10;
           a = a + 1;
       }

        num = 1000 * a + 100 * b + 10 * c + d;
    }

    printf("\n\n");
    return 0;
}