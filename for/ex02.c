#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL,"portuguese");
    int i;

    printf ("NUMEROS PARES ENTRE 100 E 200");

    for ( i = 100; i <= 200; i++)
    {
       if (i % 2 == 0)
       {
         printf ("%d\n",i);
       }
       
    }
    return 0;
}