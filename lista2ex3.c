#include<stdlib.h>
#include<stdio.h>

int main(){
    int num;

    printf(">>>Insira o número para ver os menores divisores primos :");
    scanf("%d",&num);

    while(num != 1){
        if(num == 0){
            return 0;
        }
        if(num % 5 == 0 || num % 7 == 0){
            printf("\"2\" (O numero e divisivel por 5 ou 7)\n");
        }
        if(num % 2 == 0 || num % 3 == 0){
            printf("\"1\" (O numero e divisivel por 2 ou 3)\n");
        }
        if(num % 2 != 0 && num % 3 != 0 && num % 5 != 0 && num % 7 != 0){
            printf("\"0\" (O numero tem cancer)\n");
        }

    return 0;
    }
}