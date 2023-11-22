#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declaraco de variaveis
    int i, j, k;
    char disc[3][250];
    float nts[3][3], somap = 0;
    float media[3];
    int peso[3];

    for (i = 0; i < 3; i++)
    {
        printf("Informe o nome da %d discplina:", i + 1);
        gets(disc[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Informe a %d nota:", j + 1);
            scanf("%f", &nts[i][j]);
        }
        for (k = 0; k < 3; k++)
        {
            printf("Digite o peso da %d nota:", k + 1);
            scanf("%d", &peso[k]);
            somap += peso[k];
        }
        media[i] = (nts[i][0] * peso[0] + nts[i][1] * peso[1] + nts[i][2] * peso[2]) / somap;
        fflush(stdin);
    }

    for (i = 0; i < 3; i++)
    {
        printf("\n%d MEDIA:%.2f\n", i + 1, media[i]);
    }

    return 0;
}