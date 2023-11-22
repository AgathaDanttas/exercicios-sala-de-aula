#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguse");
    int i, soma = 0;
    int num[4];
    char r[250];

    for (i = 0; i < 4; i++)
    {
        printf("Digite a %d nota:\n", i + 1);
        scanf("%d", &num[i]);
        soma += num[i];
    }
    printf("\n");
    for (i = 0; i < 4; i++)
    {
        printf("%d NOTAS:%d\n", i + 1, num[i]);
    }
    printf("MEDIA:%d\n", soma / 4);

    soma / 4 >= 7 ? strcpy(r,"APROVADO") : strcpy(r,"\n");
    soma / 4 >= 5 ? strcpy(r,"RECUPERACAO") : strcpy(r,"REPROVADO");

    printf("SITUACAO:%s",r);
    return 0;
}