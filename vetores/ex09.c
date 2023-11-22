#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguse");
    int i, idd[3];
    char nome[3][200];

    for (i = 0; i < 3; i++)
    {
        printf("Digite o %d° nome:", i + 1);
        gets(nome[i]);
        printf("Digite a %d° idade:", i + 1);
        scanf("%d", &idd[i]);
        fflush (stdin);
    }

    for (i = 0; i < 3; i++)
    {
        printf("%d Nome:%s\n", i + 1, nome[i]);
        printf("%d Idade:%d\n", i + 1, idd[i]);
    }

    return 0;
}