#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n1, n2, menor = 999999999, maior = 0, soma = 0, p;
    float m;

    printf("Digite o 1° numero:");
    scanf("%d", &n1);
    printf("Digite o 2° numero:");
    scanf("%d", &n2);

    system ("cls");

    soma = n1 + n2;
    menor = n1 < n2 ? n1 : n2;
    maior = n1 > n2 ? n1 : n2;
    m = (float)soma / 2;
    p = n1 * n2;

    printf ("-----------------RESULTADO-------------\n");
    printf("SOMA:%d\n", soma);
    printf("MEDIA:%.2f\n", m);
    printf("PRODUTO:%d\n", p);
    printf("MENOR NUMERO:%d\n", menor);
    printf("MAIOR NUMERO:%d\n", maior);

    return 0;
}