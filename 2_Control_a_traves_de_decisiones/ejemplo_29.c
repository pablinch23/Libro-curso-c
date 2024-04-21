/*En este ejemplo se recoge un caracter del buffer del teclado y revisa si es mayuscula sin operadores logicos*/

#include "librerias.h"

void main(void)
{
    char a;

    puts("Dame un caracter");
    a = getchar();

    system("cls");

    if(a >= 'A')
        if(a <= 'Z')
            puts("El caracter es mayuscula");
        else   
            puts("No es mayuscula");
    else
        puts("No es mayuscula");

    putchar('\n');

    system("pause");
}