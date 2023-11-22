#include <stdio.h>
#include <stdlib.h>

int main()
{

    char bandas[3][250];
    char integrantes[3][5][250];
    int i, j;

    for (i = 0; i < 3; i++)
    {
        printf("Informe o nome da %d banda:", i + 1);
        gets(bandas[i]);
        
        for (j = 0; j < 5; j++)
        {
            printf("Informe o nome do %d integrante :", j + 1);
            gets(integrantes[i][j]);
            printf ("\n");
        }
    }
    printf ("\n");

    for (i = 0; i < 3; i++)
    {
        printf("%d Banda:%s",i+1,bandas[i]);
        printf ("\n");
        for (j = 0; j < 5; j++)
        {
            printf("%d Integrante:%s",j+1,integrantes[i][j]);
            printf ("\n");
        }
    }
    return 0;
}