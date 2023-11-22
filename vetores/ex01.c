#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL,"portuguse");
    
    int v [5] = {10,20,30,40,50};
    int i;
    float s = 0;
   
    for (i = 0; i < 5; i++){
        s += v[i];
    }
    
    printf ("MEDIA:%.1f",s/5);
    return 0;
}