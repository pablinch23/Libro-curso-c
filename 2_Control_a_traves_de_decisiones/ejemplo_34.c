/*En este ejemplo se recoge un caracter del buffer del teclado y lo clasifica, version usando or*/

#include "librerias.h"

void main(void)
{
    char a;

    puts("Dame un caracter");
    a = getchar();

    system("cls");

    if((a < 'a') || (a > 'z'))
        if((a < 'A') || (a > 'Z'))
            if((a < '0') || (a > '9'))
                puts("Caracter diferente de letra y numero");
            else    
                puts("Es un numero");
        else
            puts("Es una mayuscula");
    else    
        puts("Es una minuscula");

    putchar('\n');

    system("pause");

}
