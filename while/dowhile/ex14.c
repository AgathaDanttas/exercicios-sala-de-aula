#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int num;

    printf("________________ACERTE O NÚMERO________________\n");

    do
    {
        printf("ADVINHE QUAL É O NÚMERO DE 1 A 10:\n");
        scanf("%d", &num);

        if (num < 7)
        {
            printf("Quase la,o numero é maior que %d\n", num);
        }
        else
        {
            printf("Quase la,o numero é menor que %d\n", num);
        }

        if (num == 7)
        {
            printf("PARABENS VOCE ACERTOU!!\n");
        }
        else
        {
            printf("Tente novamente\n");
        }

    } while (num != 7);

    return 0;
}