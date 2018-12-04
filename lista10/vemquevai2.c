/*
2222) Crie uma estrutura representando os alunos do curso de Programação II. A estrutura deve
conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da
terceira prova.
(a) Permita ao usuário entrar com os dados de 5 alunos. #####
(b) Encontre o aluno com maior nota da primeira prova. ###
(c) Encontre o aluno com maior média geral. ###
(d) Encontre o aluno com menor média geral. ###
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 7.0 para aprovação. #!
*/

#include <stdio.h>
#include <stdlib.h>

struct alunopg2
{
    int matricula;
    char nome;
    int p1, p2, p3;
    float media;
};
typedef struct alunopg2 Aluno;

float mediaFudida(Aluno *renan){
    float soma;

    soma = renan->p1 + renan->p2 + renan->p3;
    soma = soma / 3; 

    return soma;
}

Aluno alunoMaiorMediaFudida(Aluno *renans, int nAlunos){
    
    Aluno fodao = renans[0];
    for(int i = 0; i < nAlunos; i++)
        if(renans[i].media > fodao.media) fodao = renans[i];

    return fodao;
}

Aluno maiorP1(Aluno *renans, int nAlunos){
    Aluno fodao = renans[0];
    for(int i = 0; i < nAlunos; i++)
        if(renans[i].p1 > fodao.p1) fodao = renans[i];

    return fodao;
}

Aluno alunoMenorMediaFudida(Aluno *renans, int nAlunos){
    Aluno fodaodido = renans[0];
    for(int i = 0; i < nAlunos; i++)
        if(renans[i].media < fodaodido.media) fodaodido = renans[i];

    return fodaodido;
}

void carregatudo(Aluno *alunos, int nAlunos){

    for(int i = 0; i < nAlunos; i++){
        printf("Aluno %i:\nMatrícula >", i);
        scanf("%i", &(alunos[i].matricula));
        printf("Nome >");
        scanf(" %s", &(alunos[i].nome));
        printf("Notas da P1, P2 e P3 >");
        scanf("%i %i %i", &(alunos[i].p1), &(alunos[i].p2), &(alunos[i].p3));
        alunos[i].media = mediaFudida(&(alunos[i]));
    }
}

void qmaprovouequemnao(Aluno *renans, int nAlunos){
    puts("___________________________");
    for(int i = 0; i < nAlunos; i++){
        if(renans[i].media < 7) printf("%s rodou! menos o programa. Media %f\n", renans[i].nome, renans[i].media);
        else printf("%s passou! Media %f\n", renans[i].nome, renans[i].media);
    }
}

int main(){
    int nAlunos;
    puts("Quantos alunos?");
    scanf("%i", &nAlunos);

    if(nAlunos < 2){
        puts("WTF BRO");
        exit(0);
    }

    puts("enfia tudo ae");
    Aluno *alunos = (Aluno*) malloc(sizeof(Aluno) * 5);
    carregatudo(alunos, nAlunos);

    Aluno fodaoP1 = maiorP1(alunos, nAlunos);
    printf("Maior nota da P1: %.2f, por %s", fodaoP1.p1, fodaoP1.nome);
    Aluno fodaosao = alunoMaiorMediaFudida(alunos, nAlunos);
    printf("Maior media geral: %.2f, por %s", fodaosao.media, fodaosao.nome);
    Aluno fodido = alunoMenorMediaFudida(alunos, nAlunos);
    printf("Menor media geral: %.2f, por %s", fodido.media, fodido.nome);

    qmaprovouequemnao(alunos, nAlunos);

    free(alunos);
}

//seja oq deus quise