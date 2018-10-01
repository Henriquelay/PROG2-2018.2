#include<stdlib.h>
#include<stdio.h>

int main(){
    int i, sexo, nFem = 0, nMas = 0;
    float altura, accFem = 0, accMas = 0, maiorAltura = 0;

    for(i=1;i<11;i++){
        printf("Aluno(a) %d: ", i);
        scanf(" %f %d", &altura, &sexo);

        if(altura > maiorAltura){
            maiorAltura = altura;
        }
        
        if(sexo == 1){
        accMas = accMas + altura;
        nMas++;

        }else{
            accFem = accFem + altura;
            nFem++;
        }
    }

    printf("Maior altura da turma: %f\nMedia de altura feminina: %f\nMedia de altura masculina: %f", maiorAltura, accFem/nFem, accMas/nMas);

    printf("\n\n");
    return 0;
}