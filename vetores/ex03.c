#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL,"portuguse");
    int v [3];
    int i;

    for ( i = 0; i < 3; i++)
    {
        printf ("O %d numero:",i+1);
        scanf ("%d",&v[i]);
    }
     
    printf ("Numeros inseridos:\n");
    for ( i = 0; i < 3; i++)
    {
       printf ("N%d:%d\n",i+1,v[i]);
    }

    return 0;
}