#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL,"portuguse");
    int v [3];
    int i,maior,menor;

    for ( i = 0; i < 3; i++)
    {
        printf ("O %d numero:",i+1);
        scanf ("%d",&v[i]);
    }
     
    maior = v[0] > v [1] ? v[0] : v[1];
    maior = v[1] > v [2] ? v[1] : v[2]; 
    menor = v[0] < v [1] ? v[0] : v[1];
    menor = v[1] < v [2] ? v[1] : v[2];
    
    printf ("Numeros inseridos:\n");
    for ( i = 0; i < 3; i++)
    {
       printf ("N%d:%d\n",i+1,v[i]);
    }
    printf ("\n");
    printf ("Maior numero:%d\n",maior);
    printf ("Menor numero:%d\n",menor);

    return 0;
}