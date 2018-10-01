#include<stdlib.h>
#include<stdio.h>

int main(){
    int n = 0;
    float valor = 0, saldo = 0;

    printf("Saldo da conta: ");
    scanf(" %f", &saldo);

    do{
        printf("Entre o codigo da operacao:\n1-Deposito\t2-Retirada\t3-Fim\n\t\t");
        scanf(" %d", &n);

        switch(n){
            case 1:
            printf("Quanto deseja depositar? ");
            scanf(" %f", &valor);
            saldo = saldo + valor;
            break;

            case 2:
            printf("Quanto deseja retirar? ");
            scanf(" %f", &valor);
            saldo = saldo - valor;
            break;

            case 3:
            printf("Ate mais!\n\n");
            break;
        }

    }while(n != 3);

    printf("Saldo final: %f\n", saldo);
    if (saldo < 0){
        printf("==CONTA ESTOURADA==");
    }else if(saldo > 0){
        printf("==CONTA POSITIVA==");
    }else{
        printf("==CONTA ZERADA==");
    }

    printf("\n\n");
    return 0;
}