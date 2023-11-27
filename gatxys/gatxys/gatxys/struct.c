#include <stdio.h>
#include <stdlib.h>

int main (){
     struct ficha_aluno {
       char nome [80];
       int idd;
       float peso,altura;
     };
    
    struct ficha_aluno aluno; 

    printf ("Informe o nome do aluno:");
    gets (aluno.nome);
    printf ("Informe a idade do aluno:");
    scanf ("%d",&aluno.idd);
    printf ("Informe o peso do aluno:");
    scanf ("%f",&aluno.peso);
    printf ("Informe a altura do aluno:");
    scanf ("%f",&aluno.altura);

    printf ("\n");

    printf ("NOME DO ALUNO:%s\n",aluno.nome);
    printf ("IDADE DO ALUNO:%d\n",aluno.idd);
    printf ("PESO DO ALUNO:%.1f\n",aluno.peso);
    printf ("ALTURA DO ALUNO:%.2f\n",aluno.altura);
    return 0;
}