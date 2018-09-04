#include<stdio.h>
#include<stdlib.h>

int main(){
    float n1, n2, n3, n4, tot, need;

    printf("\n=====================.NOTAS FINAIS.=======================\n==\tDigite as 4 notas do aluno\t\t\t==\n==========================================================\n");
    scanf(" %f %f %f %f", &n1, &n2, &n3, &n4);
    tot = n1 + n2 + n3 + n4;

    if (tot >= 32){
        printf("\n==INFELIZ APROVADO! UM PASSO MAIS PROXIMO DAS FERIAS ADIANTADAS :)\nTOTAL = %f",tot);
    }else if(tot < 20){
        printf("\n==REPROVADO DIRETO. PELO MENOS NEM DA TRABALHO :)\nTOTAL = %f",tot);
    }else{
        need = (100 - tot)  / 10;
        printf("\n==PROVA FINAL. DESCE O PAU >:(\nTOTAL = %f\nPRECISA = %f",tot,need);
    }

    printf("\n\n");
    return 0;
}