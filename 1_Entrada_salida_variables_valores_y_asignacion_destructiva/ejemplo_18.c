/*En este ejemplo se leen 3 caracteres y promedia los valores correspondientes a dichos caracteres segun el codigo ascii e imprime el caracter promedio*/

#include "librerias.h"

void main(void)
{
    char a, b, c, d;

    puts("Dame tres caracteres juntos(sin espacios)");
    scanf("%c%c%c", &a, &b, &c);
    d = (a + b + c ) / 3;

    system("cls");
    
    printf("Promedio: %c\n", d);
    
    putchar('\n');

    system("pause");
}