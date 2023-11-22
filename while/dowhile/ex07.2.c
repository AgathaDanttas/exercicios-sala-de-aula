#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL,"portuguese");
    float nota,media;
    int i;
    float soma = 0;

   for (i = 1; i <= 4;i++)
   {
      do 
     {
       printf ("Digite a %d nota:",i);
       scanf ("%f",&nota);   
     }while (nota >= 0 && nota > 10 );
     soma += nota;
     media = soma/4;
   }
   printf ("MÉDIA DO ALUNO:%.2f",media);
  
    
    return 0;
}
 