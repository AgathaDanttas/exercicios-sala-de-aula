#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguse");
    int v[5];
    int i;
    float s = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %d° numero:",i);
        scanf("%d",&v[i]);
        s += v[i];
    }
    printf ("SUA MEDIA:%.1f",s/5);

    return 0;
}