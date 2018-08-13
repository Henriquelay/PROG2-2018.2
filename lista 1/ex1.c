#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Calculadora de medi aritmetica de 3 num\n");
    printf("Entre os numeros\n");
    scanf("%i%i%i", &a, &b, &c);

    printf("Media aritmetica = %i\n", (a + b + c)/3);

    return 0;
}