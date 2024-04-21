/*En este ejemplo se recoge un caracter del buffer del teclado y revisa si es mayuscula, version usando el operador or*/

#include "librerias.h"

void main(void)
{
    char a;

    puts("Dame un caracter:");
    a = getchar();

    system("cls");

    if((a < 'A') || (a > 'Z'))
        puts("No es mayuscula");
    else    
        puts("El caracter es mayuscula");

    putchar('\n');

    system("pause");
}
