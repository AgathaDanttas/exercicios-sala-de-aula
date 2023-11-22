#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i;
    float nota, media, soma;
    char r[250];

    for (i = 1; i <= 2; i++)
    {
        do
        {
            printf("Digite a %d nota:", i);
            scanf("%f", &nota);

        } while (nota < 0 || nota > 10);

        soma += nota;
        media = soma / 2;
        if (media >= 7)
        {
            strcpy(r, "Aluno Aprovado");
        }
        else if (media >=  5)
        {
            strcpy(r, "Aluno em Recuperação");
        }
        else
        {
            strcpy(r, "Aluno Reprovado");
        }
    }

    printf("MÉDIA:%.1f\n", media);
    printf("SITUAÇÃO:%s", r);

    return 0;
}
