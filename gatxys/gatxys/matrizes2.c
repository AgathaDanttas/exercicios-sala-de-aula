#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    // declaraco de variaveis:
    float notas[2][3];
    char nomes[2][200];
    int i, j;

    for (i = 0; i < 2; i++)
    {
        printf("Digite o nome do aluno:");
        gets(nomes[i]);
        for (j = 0; j < 3; j++)
        {
            printf("Informe a nota do aluno:");
            scanf("%f", &notas[i][j]);
        }
        fflush(stdin);
        setbuf (stdin,0);
    }
    system ("cls");

    printf ("Informacoes dos alunos:..\n");
    for (i = 0; i < 2; i++)
    {
        printf("Nome do aluno:%s\n",nomes  [i]);
        for (j = 0; j < 3; j++)
        {
            printf ("Notas:%.2f\n",notas[i][j]);
        }
    }
    return 0;
}