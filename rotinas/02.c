#include <stdio.h>
#include <stdlib.h>

int maior(int num1, int num2)
{
    int soma = 0;
    soma = num1 + num2;
    return soma;
    printf("Soma:%d\n", soma);
}

int main()
{
    int x, y;

    printf("Informe um numero:");
    scanf("%d", &x);
    printf("Informe um numero:");
    scanf("%d", &y);

    maior(x, y);

    return 0;
}