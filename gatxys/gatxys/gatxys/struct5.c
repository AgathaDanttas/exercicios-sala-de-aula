#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct ficha_aluno
    {
        char nome[80];
        char endereco[250];
        int idd;
    };
    struct ficha_aluno pessoa;

    printf("Informe seu nome:");
    gets(pessoa.nome);
    printf("Informe sua idade %s :", pessoa.nome);
    scanf("%d", &pessoa.idd);
    fflush(stdin);
    printf("Informe seu endereco:");
    fgets(pessoa.endereco, 250, stdin);
    fflush(stdin);

    printf("\n");

    printf("NOME DO ALUNO:%s\n", pessoa.nome);
    printf("IDADE DE %s:%d\n", pessoa.nome, pessoa.idd);
    printf("ENDERECO DE %s:%s\n", pessoa.nome, pessoa.endereco);

    return 0;
}