#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct ficha_aluno
    {
        char nome[80];
        float notas[2];
        int idd;
    };
    int i, j;
    struct ficha_aluno aluno[3];

    for (i = 0; i < 3; i++)
    {
        printf("Informe o nome do %d aluno:", i + 1);
        gets(aluno[i].nome);
        printf ("Informe a idade de %s:",aluno[i].nome);
        scanf ("%d",&aluno[i].idd);
        for (j = 0; j < 2; j++)
        {
            printf("Informe a %d nota de %s:", j + 1, aluno[i].nome);
            scanf("%f", &aluno[i].notas[j]);
        }
        fflush (stdin);
    }

    printf("\n");

    for (i = 0; i < 3; i++)
    {
        printf("NOME DO ALUNO:%s\n", aluno[i].nome);
        printf("IDADE DE %s:%d\n",aluno[i].nome, aluno[i].idd);

        for (j = 0; j < 2; j++)
        {
            printf("%d NOTAS DO ALUNO:%f\n",j+1, aluno[i].notas[j]);
           printf ("\n");
        }
    }

    return 0;
}