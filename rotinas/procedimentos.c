#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

float maior(float num1, float num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    float x,y,m;
    

    printf("Digite o numero");
    scanf("%f", &x);
    printf("Digite o numero");
    scanf("%f", &y);

    m = maior(x,y);

    printf("MAIOR:%.2f\n", m);

    return 0;
}