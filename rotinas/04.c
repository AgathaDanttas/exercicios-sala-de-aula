#include <stdio.h>
#include <stdlib.h>

float centimetros (float b){

   return  b * 100;
}

int main (){
   float metros;
   printf ("Iforme o valor em metros:");
   scanf ("%f", &metros);

   centimetros (metros);
   printf ("Centimetros: %.2f\n",centimetros (metros));


    return 0;
}