/*En este ejemplo lee un caracter y lo clasifica como numero, vocal u otro*/
/*Autor: Pablo Chavez*/

#include "librerias.h"

void main(void)
{
    char a;

    puts("Dame un caracter");
    switch(getchar())
    {
        case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9': puts("\nEs un numero \n"); break;
        case 'a': case 'e': case 'i': case 'o': case 'u': case 'A': case 'E': case 'I': case 'O': case 'U': puts("\nEs una vocal \n"); break;
        default: puts("\nNi vocal ni numero\n"); 
    }

    system("pause");

}