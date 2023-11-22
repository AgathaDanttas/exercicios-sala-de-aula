#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int num;
    char r[250];

    printf("Digite um valor:");
    scanf("%d", &num);

    if (num > 10)
    {
        strcpy(r, "MAIOR QUE 10");
    }
    else if (num < 10)
    {
        strcpy(r, "MENOR QUE 10");
    }
    else
    {
        strcpy(r, "IGUAL A 10");
    }

    printf("\n%s\n", r);
    return 0;
}