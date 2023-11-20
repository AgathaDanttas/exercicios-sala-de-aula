#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int numeros[2][2];
    int i, j;

    printf("Informe os elementos da matriz:\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Elemento da linha %d Elemente da coluna %d: \n", i + 1, j + 1);
            scanf("%d", &numeros[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Elemento da linha %d:\n Elemente da coluna %d:%d\n", i + 1, j + 1, numeros[i][j]);
        }
    }

    return 0;
}