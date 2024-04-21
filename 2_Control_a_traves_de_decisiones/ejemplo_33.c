/*En este ejemplo se recoge un caracter del buffer del teclado y lo clasifica, version usando and*/

#include "librerias.h"

void main(void)
{
    char a;

    puts("Dame un caracter: ");
    a = getchar();

    system("cls");

    if((a >= 'a') && (a <= 'z'))
        puts("Es una minuscula");
    else
    if((a >= 'A') && (a <= 'Z'))
        puts("Es una mayuscula");
    else
    if((a >= '0') && (a <= '9'))
        puts("Es un numero");
    else
        puts("Es diferente de numero y letras");

    putchar('\n');

    system("pause");

}
