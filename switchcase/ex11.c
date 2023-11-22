#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
   
    char s;
    float p,h;

    printf("Digite sua altura:\n");
    scanf("%f ", &h);
    printf("Digite seu sexo:          F/M\n");
    fflush(stdin);
    scanf("%c", &s);
    s = toupper(s);

    p = s == 'F' ? (62.1 * h) - 44.7 : (72.7*h) - 58;

    printf("PESO:%.1f\n", p);

    return 0;
}