#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int nota, contador = 0, soma = 0;
    float media;

    printf("OS NUMEROS DEVERAO SER POSITIVOS E INTEIROS\n PARA ENCERRAR A LEITURA DOS NÚMEROS,INSIRA UM NÚMERO NEGATIVO\n");
    do
    {
        printf("Digite sua nota:\n");
        scanf("%d", &nota);

        if (nota > 0)
        {
            soma += nota;
            contador++;
        }

    } while (nota > 0);

    if (contador > 0)
    {
       media = soma / contador;
    }
    else
    {
      printf ("Nenhum número válido foi inserido");
    }
    
    printf("\nA média dos números informados: %.1f\n", media);

    return 0;
}