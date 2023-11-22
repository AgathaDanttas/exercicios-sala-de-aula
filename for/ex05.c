#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i, num, par,imp=0;

    for (i = 1; i <= 5; i++)
    {
        printf("Digite o %d° numero:",i);
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            par++;
        }
        else
        {
            imp++;
        }
    }
    printf ("\n");
    printf ("NUMEROS PARES:%d\n",par);
    printf ("NUMEROS IMPARES:%d\n",imp);

    return 0;
}