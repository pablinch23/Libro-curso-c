/*Este ejemplo lee un caracter e imprime el valor del mismo segun el codigo ascii*/

#include "librerias.h"

void main(void)
{
    char a;
    puts("Dame un caracter para saber su numero en codigo ascii: ");
    a = getchar();

    system("cls");

    printf("El valor ascii de \"%c\" es %d. \n", a, a);

    putchar('\n');

    system("pause");
}