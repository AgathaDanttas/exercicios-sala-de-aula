#include <stdio.h>
#include <stdlib.h>

int maior (int num1,int num2){
    return num1 > num2 ? num1 : num2;
}

int main (){
   int x,y,m;
  
    printf ("Informe um numero:");
    scanf ("%d", &x);
    printf ("Informe um numero:");
    scanf ("%d", &y);

    m = maior (x,y);

    system ("cls");

    printf ("Maior numero:%d\n",m);

    return 0;
}