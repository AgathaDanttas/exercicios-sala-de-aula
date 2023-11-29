#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct dados
    {
        char nome[250], cpf[250];
        char admissao[8];
        char dnasc[10];
        char endereco[200], matricula[250];
    };
    struct dados funcionario[3];
    struct dados cliente[3];
    int i;

    printf ("********************************************************************************************************\n");
    printf ("\t\t\t\tCADASTRO\n");
    printf ("********************************************************************************************************\n");
    for (i = 1; i < 3; i++)
    {
        printf ("Informe os dados do %d funcionario...\n",i);
        printf ("\n");

        printf("Informe o nome do funcionario:");
        fgets(funcionario[i].nome, 250, stdin);
        fflush(stdin);
        printf("Informe a data de admissao:");
        fgets(funcionario[i].admissao, 8, stdin);
        fflush(stdin);
        printf("Informe o endereco do(a) funcionario %s:", funcionario[i].nome);
        fgets(funcionario[i].endereco, 200, stdin);
        fflush(stdin);
        printf("Informe a matricula de %s:", funcionario[i].nome);
        fgets(funcionario[i].matricula, 250, stdin);
        fflush(stdin);

        printf("\n");
        printf ("Informe os dados do %d cliente...",i);
        printf("\n");

        printf("Informe o nome do cliente:");
        fgets(cliente[i].nome, 250, stdin);
        printf("Informe a data de nascimento do cliente %s:",cliente[i].nome);
        fgets(cliente[i].dnasc, 10, stdin);
        fflush(stdin);
        printf("Informe o endereco do cliente %s:", cliente[i].nome);
        fgets(cliente[i].endereco, 200, stdin);
        fflush(stdin);
        printf("\n");
   
    }
   
    system("clear||cls");

    printf("Exibindo funcionario do funcionario e clientes....\n");
    printf("\n");
    for (i = 1; i < 3; i++)
    {
        printf ("Exibindo dados do %d funcionario...\n",i);
        printf("Nome:%s\n", funcionario[i].nome);
        printf("Admissao:%s\n", funcionario[i].admissao);
        printf("Matricul:%s\n:", funcionario[i].matricula);
        printf("Endereco:%s\n:", funcionario[i].endereco);

        printf("\n");
        printf ("Exibindo dados do %d cliente...\n",i);

        printf("Nome:%s\n", cliente[i].nome);
        printf("Data de Nascimento:%s\n",cliente[i].dnasc);
        printf("Endereco:%s\n:", cliente[i].endereco);
   
    }
    
    return 0;
}