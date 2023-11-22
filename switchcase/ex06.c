#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    char email[250];
    char senha[7], r[200];

    do
    {
        printf("EMAIL:\n");
        gets(email);
        sleep(3);
        printf("\tSENHA:\n");
        gets(senha);

        if (strcmp(email, "teste123@gmail.com") == 00 && (senha, "123456") == 0)
        {
            strcpy(r, "LOGIN OU SENHA INCORRETOS!\n");
        }
        else
        {
            strcpy(r, "BEM VINDO (A) SUA PAGINA INICIAL!\n");
        }

    } while (strcmp(email, "teste123@gmail.com") != 0 && strcmp(senha, "123456") != 0);

    printf("%s", r);

    return 0;
}