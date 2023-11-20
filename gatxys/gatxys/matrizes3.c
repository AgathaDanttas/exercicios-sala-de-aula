#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    // declaraco de variaveis:
    float notas[3][3], somaN = 0, media[3];
    char nomes[3][200];
    int i, j;

    // operacao:

    for (i = 0; i < 3; i++)
    {
        printf("\nDigite o nome do aluno:");
        gets(nomes[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Informe a nota do aluno:");
            scanf("%f", &notas[i][j]);

            somaN += notas[i][j];
        }
        media [i] = somaN/j;
        somaN = 0;
        
        fflush(stdin);
        setbuf(stdin, 0); //ultilizar no online gdb
    }

    system("cls");

    printf("Informacoes dos alunos:..\n");
    for (i = 0; i < 2; i++)
    {
        printf("Nome do aluno:%s\n", nomes[i]);
        for (j = 0; j < 3; j++)
        {
            printf("Notas:%.2f\n", notas[i][j]);
        }
        printf("Media:%.2f\n", media[i]);
    }
    return 0;
}