#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL,"portuguse");
    int i,v [5]={10,11,98,23,45};

    for (i = 0; i < 5; i++)
    {
         printf ("%d\n",v[i]);
    }
    
   

    return 0;
}