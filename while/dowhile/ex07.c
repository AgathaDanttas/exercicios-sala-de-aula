#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL,"portuguese");
    float nota;

  do
  {
    printf ("Digite sua nota:");
    scanf ("%f",&nota); 

   }while  (nota < 0 || nota > 10 );

  printf ("NOTA INFORMADA:%.2f",nota);


    
    return 0;
}