#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int macas;
    float valor;

    printf("--------------------------MACAS------------------------------\n");
    printf("|ate 11 macas                =                        1.30un|\n");
    printf("|apartir de 12 macas         =                        1.00un|\n");
    printf("-------------------------------------------------------------\n");
    printf("Digite quntas macas aduiridas:");
    scanf("%d", &macas);

    valor = macas <= 11 ? macas * 1.30 : macas * 1.00;

    printf("\n");
    printf("Valor a pagar:%.1f", valor);
    printf("\n");
    printf("\n");

    return 0;
}