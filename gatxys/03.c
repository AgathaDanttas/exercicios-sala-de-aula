// crie um algoritmo usando struct com as informaçoes abaixo:
// ° nome
// ° idade
// ° media
// ° duas notas (vetor)
// ultilize os dados informados para solicitar estas informacoes de tres alunos
// ° ultilize vetor
// ° mostre os dados do usuario

#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct dados
    {
        char nome[250];
        float media, notas[2];
        int idade;
    };
    struct dados aluno[3];

    int i, j;
    float soma;

    for (i = 1; i <= 3; i++)
    {
        printf("Informe o nome do %d aluno: ", i);
        fgets(aluno[i].nome, 250, stdin);
        printf("Informe a idade de %s:", aluno[i].nome);
        scanf("%d", &aluno[i].idade);
        for (j = 0; j < 2; j++)
        {
            printf("Informe o %d° nota de %s:", j + 1,aluno[i].nome);
            scanf("%f", &aluno[i].notas[j]);
            soma += aluno[i].notas[j];
        }
        fflush (stdin);
        aluno[i].media = soma / j;
        soma = 0;
        printf ("\n");
    }

    for (i = 1; i <= 3; i++)
    {
        printf("Aluno: %s\n",aluno[i].nome);
        printf("Idade: %d\n",aluno[i].idade);
        for (j = 0; j < 2; j++)
        {
            printf("%d° nota:%.1f\n", j + 1, aluno[i].notas[j]);
        }
       printf ("Media:%.1f",aluno[i].media);
       printf ("\n");
    }

    return 0;
}
