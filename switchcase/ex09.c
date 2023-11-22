#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int cod, ano, ttp, idd;
    char r [250];
    printf("Digite seu codigo:\n");
    scanf("%d", &cod);
    printf("Informe seu ano de nascimento:\n");
    scanf("%d", &ano);
    printf("Informe seu Tempo de Trabalho em Anos:\n");
    scanf("%d", &ttp);

    system ("cls");

    idd = 2023 - ano;

    if (idd >= 65 || ttp >= 30)
    {
        strcpy(r,"REQUERER A APOSENTADORIA!");
    }
    else
    {
        strcpy(r,"NAO REQUERER A APOSENTADORIA!");
    }

    printf ("CODIGO:%d\n",cod);
    printf ("IDADE:%d\n",idd);
    printf ("TEMPO DE TRABALHO:%d\n",ttp);
    printf ("SITUACAO:%s\n",r);

    return 0;
}
