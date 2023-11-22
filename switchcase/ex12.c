#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float h,p,imc;
    printf(" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n");
    printf("|        IMC                            CLASSIFICACAO                  |\n");
    printf("|    abaixo de 18.5                     abaixo do peso                 |\n");
    printf("|  entre de 18.6 e 24.9                 peso ideal (parabens)          |\n");
    printf("|  entre de 25.0 e 29.9                 levemente acima do peso        |\n");
    printf("|  entre de 30.0 e 34.9                 obesidade grau |               |\n");
    printf("|  entre de 35.0 e 39.9                 obesidade grau || (severa)     |\n");
    printf("|     acima de 40                       obesidade gru ||| (morbida)    |\n");
    printf("| _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|\n");

    printf("Para saber seu IMC infome seu peso e altura:\n");
    printf("PESO:\n");
    scanf ("%f",&p);
    printf("ALTURA:\n");
    scanf ("%f",&h);

    imc = (h * h)/p;
    
    printf ("%.1f",imc);
    return 0;
}