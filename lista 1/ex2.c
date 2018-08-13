#include <stdio.h>
#include <math.h>

#define ToRad 0.0174532

int main()
{
    float ang;

    printf(".-.-'-.Calculadora de angulos.-'-.-.\n\tDigite o angulo a ser calculado em graus : ");
    scanf("%f",&ang);

    printf("Seno = %f\n", sin(ToRad * ang));
    printf("Cosseno = %f\n", cos(ToRad * ang));
    printf("Tangente = %f\n", tan(ToRad * ang));

    return 0;
}