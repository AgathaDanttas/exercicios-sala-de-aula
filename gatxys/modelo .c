#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declaracao de variaveis
    int i, n[6];

    // esse progrma ira ler 6 valores inteiros positivos e pares,em seguida mostrara na tela o valor lido na ordem inversa

    for (i = 0; i < 6; i++)
    {
        do
        {
            printf("Digite o %d valor:\n", i + 1);
            scanf("%d", &n[i]);
        } while (n[i] < 0 || n[i] % 2 != 0);
    }

    printf("\n");

    for (i = 5; i >= 0; i--)
    {
        printf("%d\n", n[i]);
    }

    return 0;
}