#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int num;

    printf("Digite um valor:");
    scanf("%d", &num);

    switch (num > 10)
    {
    case 1:
        printf("\nE MAIOR QUE 10");
        break;

    default:
        printf("NAO E MAIOR QUE 10");
        break;
    }

    return 0;
}