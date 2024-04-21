/*En este ejemplo lee un digito y verifica si es impar. Version usando and*/
/*Autor: Pablo Chavez*/

#include "librerias.h"

void main(void)
{
    char a;

    puts("Dame un caracter de preferencia un digito del 1 al 9");
    a = getchar();

    system("cls");

    if((a >= '0') && (a <= '9') && ((a - '0') % 2 == 1))
        puts("Es un digito impar");
    else
        puts("En un digito par");

    putchar('\n');

    system("pause");
}