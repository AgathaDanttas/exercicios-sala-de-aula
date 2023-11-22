#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int num;
    int pares = 0;
    int impares = 0;
    float somapares = 0;
    float mediapares = 0;
    float mediageral = 0;
    int  somageral = 0;
    int contador = 0;

    do
    {
        printf("DIGITE NUMEROS POSITIVOS:\n");
        scanf("%d",&num);
        contador++;

        if (num != 0)
        {

            if (num % 2 == 0)
            {

                pares++;
                somapares += num;
            }
            else
            {
                impares++;
            }
            somageral += num;
        }

    } while (num != 0);

    if (pares != 0)
    {
        mediapares = somapares / pares;
    }

    if (contador != 0)
    {
        mediageral = somageral / contador;
    }

    printf("NUMEROS PARES:%d\n", pares);
    printf("NUMEROS IMPARES:%d\n", impares);
    printf("MEDIA DOS NUMEROS PARES:%.1f\n", mediapares);
    printf("MEDIA GERAL:\n%.1f", mediageral);

    return 0;
}