#include <stdio.h>
 
int main ()
{
        char op ;
        int num1, num2 ;

        printf ("A calculadora mais fodassa e menos eficiente que voce vera \n") ;
        printf ("Que operacao deseja realizar ? Digite o simbolo dela \n") ;
        scanf ("%c", &op) ;

        if (op != '+' && op != '-' && op != '*' && op != '/')
        {
                printf ("Codigo de operacao invalido. Tente novamente. \n") ;
                return 0 ;
        }

        printf ("Digite os numeros a serem operados \n") ;
        scanf ("%i%i", &num1, &num2) ;

        switch (op)
        {
                case '+':
                        printf ("%i \n", num1 + num2) ;
                        break ;

                case '-':
                        printf ("%i \n", num1 - num2) ;
                        break ;

                case '*':
                        printf ("%i \n", num1 * num2) ;
                        break ;

                case '/':
                        if (num2 != 0)
                        {
                                printf ("%i \n", num1 / num2) ;
                        }
                        else 
                        { 
                                printf ("Divisao por zero NAO PODE \n") ;
                        }
                        break ;
        }


        return 0 ;
}