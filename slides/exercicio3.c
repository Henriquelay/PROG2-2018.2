#include<stdlib.h>
#include<stdio.h>

int main(){
    float a, b, c, d, e;
    printf("Insira os 5 numeros em ordem : ");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    if (a >= b && a >= c && a >= d && a >= e){
        printf("%f e o maior.\n",a);
    }
    else if (b >= c && b >= d && b >= e){
            printf("%f e o maior.\n",b);
        }
        else if ( c >= d && c >= e){
            printf("%f e o maior.\n",c);
            }
            else if ( d >= e ){
                    printf("%f e o maior.\n",d);
                    }
                    else{
                        printf("%f e o maior.\n",e);
                }
    return 0;
    }   