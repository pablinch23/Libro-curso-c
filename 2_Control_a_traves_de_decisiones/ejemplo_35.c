/*En este ejemplo lee un digito y verifica si es impar. Version usando or*/
/*Autor: Pablo Chavez*/

#include "librerias.h"

void main(void)
{
    char a;

    puts("Dame un caracter, de preferencia un numero del 1 al 9");
    a = getchar();

    system("cls");
    if((a == '1') || (a == '3') || (a == '5') || (a == '7') || (a == '9'))
        puts("Es un digito impar");
    else
        puts("En un numero par");

    putchar('\n');

    system("pause");
}