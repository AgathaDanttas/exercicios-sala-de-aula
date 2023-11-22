#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int idd;
     char r [250];
    printf("Digite sua idade:");
    scanf("%d", &idd);

    if (idd < 18 || idd > 65)
    {
        strcpy(r,"Nao e obrigatorio o voto");
    }
    else
    {
        strcpy(r,"E obrigartorio o voto");
    }
    printf ("%s",r);

    return 0;
}