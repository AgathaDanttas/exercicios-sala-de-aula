#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL,"portuguse");
    int v [2];
    int i,maior;

    for ( i = 0; i < 2; i++)
    {
        printf ("O %d numero:",i+1);
        scanf ("%d",&v[i]);
    }
     
    maior = v[0] > v [1] ? v[0] : v[1];

    printf ("Numeros inseridos:\n");
    for ( i = 0; i < 2; i++)
    {
       printf ("N%d:%d\n",i+1,v[i]);
    }

    printf ("Maior numero:%d",maior);

    return 0;
}