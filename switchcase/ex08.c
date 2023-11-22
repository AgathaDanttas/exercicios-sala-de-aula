#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int  n1, n2, n3, maior = 0, menor = 0;

    printf("Digite o 1° numero:");
    scanf("%d", &n1);
    printf("Digite o 2° numero:");
    scanf("%d", &n2);
    printf("Digite o 3° numero:");
    scanf("%d", &n3);

    maior = n1 > n2 && n1 > n3 ? n1 : n2;
    maior = n3 > n1 && n3 > n2 ? n3 : n2;

    menor = n1 < n2 && n1 < n3 ? n1 : n2;
    menor = n3 < n1 && n3 < n2 ? n3 : n1;

    printf ("-----------------------RESULTADO---------------------\n");

    printf("1° Numero Informado:%d\n", n1);
    printf("2° Numero Informado:%d\n", n2);
    printf("3° Numero Informado:%d\n", n3);
    printf("Maior Numero:%d\n", maior);
    printf("Menor Numero:%d\n", menor);

    return 0;
}