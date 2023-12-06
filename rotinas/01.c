// - quantos numeros sao pares
// - quantos numeros sao impares

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 6
void quantidades(int num[])
{
    int i, par = 0, imp = 0;

    for (i = 0; i < tam; i++)
    {
        num[i] % 2 == 0 ? par++ : imp++;
    }

    printf("Numeros pares:%d\n", par);
    printf("Numeros impares:%d\n", imp);
}

int main()
{
    int i, num[tam];

    for (i = 0; i < tam; i++)
    {
        printf("Informe o %d numero: ", i + 1);
        scanf("%d", &num[i]);
    }

    quantidades (num);

    return 0;
}
