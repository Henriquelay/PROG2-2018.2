#include <stdio.h>

int main()
{
    float temp;
    char in;

    printf("Conversor de temperaturas. Digite C se voce quiser um temp de Fahrenheit para Celsius e F para o contrario : ");
    scanf("%c",&in);
    printf("\nAgora digite o valor da temperatura : ");
    scanf("%f", &temp);

    switch(in)
    {
        case 'C': printf("Temp em Celsius = %f\n", (temp - 32) * 5 / 9 );
            break;
        case 'F': printf("Temp em Fahrenheit = %f\n", ((9 * temp) / 5) + 32) ;
            break;
    }
    return 0;
}