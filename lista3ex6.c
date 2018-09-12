#include<stdlib.h>
#include<stdio.h>

int main(){
    int idade = 0, idadeTop = 0, idadeOld = 0;
    float nota, notaTop = 0, notaOld = 0;

    while (1 > 0){
        
        printf("Digite a idade do aluno (negativo para encerrar): >>> ");
        scanf(" %d", &idade);
    
        if (idade < 0){

            printf("Idade do aluno com maior nota: %d\n", idadeTop);
            printf("Nota do aluno mais velho: %.2f\n", notaOld);

            printf("\t\tPrograma encerrado\n________________________________\n\n");
            return 0;
        }

        printf("Digite a nota desse aluno: >>> ");
        scanf(" %f", &nota);

        if (nota > notaTop){

            notaTop = nota;
            idadeTop = idade;
        }

        if (idade > idadeOld){

            idadeOld = idade;
            notaOld = nota;
        }
    }
}