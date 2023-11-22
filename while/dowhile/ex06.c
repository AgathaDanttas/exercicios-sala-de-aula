#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    char resposta;
    float nota, media;
    int contador = 0;
    float soma = 0;
    do
    {
        

        printf("Digite sua nota:\n");
        scanf("%f", &nota);

        fflush(stdin);
        printf("Deseja inserir mais uma nota?\n");
        printf("Digite S para SIM e N para NÃO\n");
        scanf("%c", &resposta);
        resposta = toupper(resposta);
        contador++;
    
        soma += nota;
    } while (resposta != 'N');
     
     media = soma/contador;
     printf ("MÉDIA:%.1f",media);

    return 0;
}