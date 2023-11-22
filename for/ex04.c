#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL,"portuguese");
    int i;
    
    for ( i = 1; i <= 15; i++)
    {
        if (i % 2 != 0)
        {
          printf ("%d\n",i);
        }
        
    }
    

    return 0;
}