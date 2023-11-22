#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int cod,idd; // codigo   //idade
    char sexo;
    float sal; // salario
    int contadorsal = 0;
    float media;
    int idd_ma;       // idade maior
    int idd_me = 999; // idade menor
    int mulheres5k = 0;
    int somasal = 0; // somasal

    do
    {
        printf("\nCÓDIGO  | DESCRIÇÃO       \n");
        printf("  1     | Adicionr Família \n");
        printf("  2     | Sair e Exibir resultados\n");
        printf("Digite o código para prosseguir:\n");
        scanf("%d", &cod);

        switch (cod)
        {
        case 1:
            printf("\nIDADE:\n");
            scanf("%d", &idd);
            printf("SEXO:\n");
            printf("M ou F\n");
            fflush(stdin);
            scanf("%c", &sexo);
            printf("SALÁRIO:\n");
            scanf("%f", &sal);
            sexo = toupper(sexo);

            contadorsal++;
            somasal += sal;

            idd_ma = idd_ma > idd ? idd_ma : idd;
            idd_me = idd_me < idd ? idd_me : idd;

            if (sexo == 'F' && sal >=  5.000)
            {
                mulheres5k++;
            }

            break;

        case 2:
            media = somasal / contadorsal;

            printf("=========RESULTADO DE PESQUISA==========\n");
            printf("\nMédia Salarial:%.2f\n", media);
            printf("Menor Idade:%d\n", idd_me);
            printf("Maior Idade:%d\n", idd_ma);
            printf("Mulheres que ganham acima de 5k:%d\n", mulheres5k);

            break;

        default:
            printf("OPÇÃO INVÁLIDO");

            break;
        }

    } while (cod != 2);

    return 0;
}