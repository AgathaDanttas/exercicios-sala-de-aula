#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguse");
    int i, soma = 0;
    int num[3];

    for (i = 0; i < 3; i++)
    {
        printf("Digite a %d nota:\n", i + 1);
        scanf("%d", &num[i]);
        soma += num[i];
    }
    for (i = 0; i < 3; i++)
    {
        printf("%d NOTAS:%d\n",i+1, num[i]);
    }
    printf("MEDIA:%d\n", soma / 3);

    return 0;
}