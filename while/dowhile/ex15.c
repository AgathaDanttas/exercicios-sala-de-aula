#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    char usuario[250];
    char senha[250];
    char usuarioc[250] = "bunny@gmail.com";
    char senhac[250] = "123456";
    char r[250];
    ;

    printf("---------------FAÇA LOGIN------------------\n");

    do
    {
        printf("\nDigite seu email:\n");
        gets(usuario);
        printf("Digite sua senha:\n");
        gets(senha);

        if (strcmp(usuario, usuarioc) == 0 && strcmp(senha, senhac) == 0)
        {
            strcpy(r, "BEM VINDO A SUA PAGINA INICIAL\n\n");
        }
        if (strcmp(usuario, usuarioc)!= 0 && strcmp(senha, senhac)!= 0)
        {
            printf("\nACESSO NEGADO,TENTE NOVAMENTE\n\n");
        }

    } while (strcmp(usuario, usuarioc) != 0 && strcmp(senha, senhac) != 0);
    system("cls||clear");
    printf("%s", r);

    return 0;
}