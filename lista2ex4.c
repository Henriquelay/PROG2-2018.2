#include<stdlib.h>
#include<stdio.h>

int main(){
    int n1 = 1, n2 = 1, n, i, x, acc = 0;

    printf("\n>>>Quantos numeros da sequencia de Fibonnaci devo somar? ");
    scanf(" %d",&n);

    if(n > 0){
        printf("%d ",n1);
        acc = acc + n1;
        if (n > 1){
            printf("+ %d ",n2);
            acc = acc + n2;
        }
    }else{
        printf("Ok entao!\n\n");
        return 0;
    }
    for(i=0;i<n-2;i++){
        x = n1 + n2;
        acc = acc + x;
        printf("+ %d ",x);
        n2 = n1;
        n1 = x;
    }
    printf("\nIsso e igual a %d\n\n",acc);


return 0;
}