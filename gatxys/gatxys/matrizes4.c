#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    char disc[3][200];
    float notas[3][2], soman = 0, media[3];
    int i, j;
    // crie um algortimo que receba o noi=me de tres discplinas,receba duas notas para cada discplina e mostre

    for (i = 0; i < 3; i++)
    {
        printf("Informe o nome da discplina:");
        gets(disc);
        for (j = 0; j < 2; j++)
        {
            printf("Informe a %d nota:", j + 1);
            scanf("%f", &notas[i][j]);
            soman += notas[i][j];
        }
        media[i] = soman / j;
        soman = 0;
        fflush(stdin);
    }

    system("cls");

    for (i = 0; i < 3; i++)
    {
        printf("\nDISCPLINA:\n%s", disc);
        for (j = 0; j < 2; j++)
        {
            printf("\n%d Nota:%.2f\n",j+1,notas[i][j]);
        }
          printf("\nMEDIA:%.2f\n", media[i]);
    }

    return 0;
}