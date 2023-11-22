#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese");
  int num, i, mul;

  printf("======================TABUADA======================\n");
  printf("Digite um número para realizar a tabuada:\n");
  scanf("%d", &num);

  for (i = 1; i <= 10; i++)
  {
    mul = num * i;
    printf("\n%d x %d = %d\n", num, i, mul);
  }

  return 0;
}