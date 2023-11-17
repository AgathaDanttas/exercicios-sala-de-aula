#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declaracao de variaveis
    int menor, maior = 0, positivos = 0, negativos = 0, contador = 0, par = 0, imp = 0, i, n[5];
    float mediapar = 0, mediaimp = 0, somap = 0, somai = 0, soma = 0;

    // esse progrma ira ler 5 valores inteiros,em seguida mostrara na tela o valor lido na ordem inversa

    for (i = 0; i < 5; i++)
    {

        printf("Digite o %d valor:\n", i + 1);
        scanf("%d", &n[i]);
        n[i] % 2 == 0 ? par++, somap += n[i] : imp++, somai += n[i];
        if (n[i] > 0)
        {
            positivos++;
        }
        else
        {
            negativos++;
        }

        maior = n[i] > maior ? n[i] : maior;
        menor = n[i] < menor ? n[i] : menor;
        soma += n[i];
    }

    mediapar = somap / (float)par;
    mediaimp = somai / (float)imp;

    printf("\n");

    printf("NUMEROS PARES:%d\n", par);
    printf("NUMEROS IMPARES:%d\n", imp);
    printf("NUMEROS POSITIVOS:%d\n", positivos);
    printf("NUMEROS NEGATIVOS:%d\n", negativos);
    printf("NUMEROS INSERIDOS:%d\n", i);
    printf("MAIOR NUMERO:%d\n", maior);
    printf("MENOR NUMERO:%d\n", menor);
    printf("MEDIA DO NUMERO PAR:%.2f\n", mediapar);
    printf("MEDIA DO NUMERO IMPAR:%.2f\n", mediaimp);
    printf("MEDIA GERAL:%.2f\n", (float)soma / 5);

    printf("\n");
    for (i = 4; i >= 0; i--)
    {
        printf("NUMEROS LIDOS NA ORDEM INVERSA:\n");
        printf("%d\n", n[i]);
    }

    return 0;
}