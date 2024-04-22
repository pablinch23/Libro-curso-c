/*En este ejemplo se recogera un caracter del buffer del teclado, lo almacenara y lo imprimira */

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char a;
    puts("Dame un caracter: ");
    a = getchar();
    putchar(a);

    putchar('\n');

    system("pause");
    
}