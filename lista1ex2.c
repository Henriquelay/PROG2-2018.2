#include<stdlib.h>
#include<stdio.h>

int main(){
    int idade, doencas;
    printf(">>>Informe sua idade:");
    scanf(" %d",&idade);
    printf(">>>Quantas doencas cronicas voce tem :");
    scanf(" %d",&doencas);

    while(idade<0){
        printf(">>>Ce ta doido vei, bota uma idade de verdade :");
        scanf(" %d",&idade);
    }

    if (idade <= 18){
        printf("\n\n\t===Valor do plano : %.2f===\n", 83.15);

    }else if(idade <= 33){
        printf("\n\n\t===Valor do plano : %.2f===\n", (1 + 0.05 * doencas) * 133.88);

        }else if(idade <= 44){
            printf("\n\n\t===Valor do plano : %.2f===\n", (1 + 0.1 * doencas) * 203.73);

            }else if(idade <= 58){
                printf("\n\n\t===Valor do plano : %.2f===\n", (1 + 0.15 * doencas) * 312.44);

                }else{
                    printf("\n\n\t===Valor do plano : %.2f===\n", (1 + 0.3 * doencas) * 498.53);
                }

    return 0;
    }