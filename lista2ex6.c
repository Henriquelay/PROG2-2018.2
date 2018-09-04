#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
    int x=0, y=0, c=0;
    float acc1=0;
    printf("Escreva 1 para exibir a expressao 1;2 para expressao 2 e 3 para expressao 3: ");
    scanf(" %d",&c);

    switch(c){
        case 1:
            x = 1;

            for(y=1;y<51;y++){
                printf("+ %d/%d ",x,y);
                acc1 = acc1 + (x/y);
                x=x+2;
            }

            printf("\n\t>>>Resultado : %f",acc1);

        break;

        case 2:
            x=50;

            for(y=1;y<51;y++){
                acc1=(pow(2,y)/x )+ acc1;
                printf("+ (2^%i)/%i ",y,x);
                x=x-1;
            }

            printf("\n\t>>>Resultado ; %f",acc1);

        break;

        case 3:
            for(x=1;x<11;x++){

                if(x % 2 == 0){
                    printf("- %d/%d ",x,x*x);
                    acc1=acc1 - 1/x;
                }else{
                    printf("+ %d/%d ",x,x*x);
                    acc1=acc1 + 1/x;
                }
            }

            printf("\n\t>>>Resultado : %f",acc1);

        break;
    }
    printf("\n\n");
    return 0;
}