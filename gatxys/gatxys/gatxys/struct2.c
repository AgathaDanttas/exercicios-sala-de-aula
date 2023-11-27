#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct ficha_aluno
    {
        char nome[80];
        int idd;
        float peso, altura;
    };

    struct ficha_aluno aluno[5];

    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Informe o nome do aluno:");
        gets(aluno[i].nome);
        printf("Informe a idade do aluno:");
        scanf("%d", &aluno[i].idd);
        printf("Informe o peso do aluno:");
        scanf("%f", &aluno[i].peso);
        printf("Informe a altura do aluno:");
        scanf("%f", &aluno[i].altura);
        fflush (stdin);
        printf("\n");
    }

    printf("\n");

    for (i = 0; i < 5; i++)
    {
        printf("NOME DO ALUNO:%s\n", aluno[i].nome);
        printf("IDADE DO ALUNO:%d\n", aluno[i].idd);
        printf("PESO DO ALUNO:%.1f\n", aluno[i].peso);
        printf("ALTURA DO ALUNO:%.2f\n", aluno[i].altura);
        printf("\n");
    }

    return 0;
}