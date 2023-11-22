#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int cod;             // codigo
    float sal;           // salario
    int contadorsal = 0; // contador salarial
    int somasal = 0;     // soma salarial
    float me_sal;        // media salarial
    float mefil;         // media filhos
    int sal_ma = 0;      // maior salario
    int sal_me = 9999;   // menor salario
    int total_f = 0;     // total de familias
    int somafil = 0;     // soma de filhos
    int fil;             // filhos
    int totalfil = 0;

    printf("-----------------PESQUISA HABITACIONAL-----------------\n");

    do
    {
        printf("\nCÓDIGO  | DESCRIÇÃO       \n");
        printf("  1     | Adicionr Familia \n");
        printf("  2     | Sair e Exibir resultados\n");
        printf("Digite o código para prosseguir:\n");
        scanf("%d", &cod);

        switch (cod)
        {
        case 1:
            printf("\nSALARIO:\n");
            scanf("%f", &sal);
            printf("NUMERO DE FILHOS:\n");
            scanf("%d", &fil);

            total_f++;

            totalfil++;
            somafil += fil;

            contadorsal++;
            somasal += sal;

            mefil = somafil / totalfil;
            me_sal = somasal / total_f;

            sal_ma = sal_ma > sal ? sal_ma : sal;
            sal_me = sal_me < sal ? sal_me : sal;

            break;
        case 2:

            printf("\n");
            printf("\nQUANTIDADE DE FAMILIAS QUE RESPONDERAM:%d\n", total_f);
            printf("MEDIA SALARIAL DA POPULAÇÃO %.2f\n", me_sal);
            printf("MEDIA DOS FILHOS %.2f\n", mefil);
            printf("MAIOR SALARIO %d\n", sal_ma);
            printf("MENOR SALARIO %d\n", sal_me);

            break;

        default:
            printf("NUMERO INVALIDO");
            break;
        }
    } while (cod != 2);

    return 0;
}