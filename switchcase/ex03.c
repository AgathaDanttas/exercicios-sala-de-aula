#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    char nome[250];
    char r[250];
    int idd, i, soma = 0;
    ;
    float nt, media;

    printf("NOME DO ALUNO:\n");
    gets(nome);
    printf("IDADE DO ALUNO:\n");
    scanf("%d", &idd);

    for (i = 1; i <= 3; i++)
    {
        printf("Digite a %d nota", i);
        scanf("%f", &nt);
        soma += nt;
    }
    media = soma / 3;

    strcpy(r, media >= 7 ? "APROVADO" : "REPROVADO");

system ("cls || clear");

    printf("%s\n", r);
    printf("%s\n", nome);
    printf("%d\n", idd);

    return 0;
}