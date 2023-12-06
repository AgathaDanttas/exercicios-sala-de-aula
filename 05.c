#include <stdio.h>
#include <stdlib.h>

float resultados( float b){

    return b < 100 ? b * 10 /100 :  b * 20 /100;
    resultados - b;

};

int main (){
    float preco;

    printf ("Informe o valor do produto:");
    scanf ("%f", &preco);

    resultados (preco);
  
    printf ("Valor com a inflacao: %.2f\n",resultados);
 
    return 0;
}