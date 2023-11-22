#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    int v[3], i;
    setlocale(LC_ALL, "portuguese");

    for (i = 1; i <= 3; i++)
    {
        printf("Digite o %d numero:", i);
        scanf("%d", &v[i]);
    }
    for (i = 1; i <= 3; i++)
    {
        printf("N%d:%d\n",i, v[i]);
       
    }
    return 0;
}