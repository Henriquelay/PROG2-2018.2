#include <stdlib.h>
#include <stdio.h>
#include <string.h>


void main(){
        char b1, b2, c = '1', S1[20] = {0}, S2[20] = {0};
        int a, acc = 0, i;

        while(1){

                printf("\n a. Ler uma string S1 (tamanho máximo 20 caracteres);\n b. Imprimir o tamanho da string S1;\n c. Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir o resultado da comparação;\n d. Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenação;\n e. Imprimir a string S1 de forma reversa;\n f. Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo usuário;\n g. Retornar uma substring da string S1. Para isso o usuário deve informar a partir de qual posição deve ser criada a substring e qual é o tamanho da substring.\n h. Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2. Os caracteres C1 e C2 serão lidos pelo usuário;\n 0. Terminar o programa\n\n>>>");

                scanf(" %c", &c);

                switch(c){
                        case 'a':
                                printf("Entre a string S1: ");
                                scanf(" %s", S1);
                                printf("\n----------------------------------");
                        break;
                        case 'b':
                                a = strlen(S1);
                                printf  ("Tamanho: %i\n\n----------------------------------", a);
                        break;
                        case 'c':
                                printf("String S2: ");
                                scanf(" %s", S2);
                                printf("Resultado da comparacao: %i\n\n----------------------------------", strcmp(S1, S2));
                        break;
                        case 'd':
                                printf("String S2: ");
                                scanf(" %s", S2);
                                printf("Concatenacao: %s\n\n----------------------------------", strcat(S1, S2));
                        break; 
                        case 'e':
                                a = strlen(S1);
                                
                                for(i = 0; i < a; a--){
                                        
                                        printf("%c", S1[a]);
                                }

                                printf(" %c\n\n----------------------------------", S1[a]);
                        break;
                        case 'f':
                                printf("Caractere: ");
                                scanf(" %c", &b1);

                                for(a = 0; a < 20; a++){

                                        if(S1[a] == b1) acc++;
                                }

                                printf("Aparece %i vezes.\n\n----------------------------------", acc);
                                acc = 0;
                        break;
                        case 'g':
                                printf("A partir de que tamanho qual e o tamanho?\n");
                                scanf(" %i %i", &a, &acc);
                                
                                for(i = 0; i < acc; i++){

                                        S2[i] = S1[a + i];
                                }

                                printf("Nova string: %s\n\n----------------------------------", S2);
                        break;
                        case 'h':
                                printf("Caracter C1: ");
                                scanf(" %c", &b1);
                                printf("Caracter C2: ");
                                scanf(" %c", &b2);

                                for(i = 0; i < 20; i++){

                                        if(S1[i] == b1) S1[i] = b2;
                                }

                                printf("String nova: %s\n\n----------------------------------", S1);
                        break;
                        case '0': return;
                }
        }
}