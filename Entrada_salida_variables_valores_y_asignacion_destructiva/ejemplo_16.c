/*En este ejemplo se lee un numero entero e imprime el caracter correspondiente segun el codigo ascii*/

#include "librerias.h"

void main(void)
{
    int a;
    puts("Dame un numero menor a 256 y mayor que 0: ");
    scanf("%d", &a);

    system("cls");

    printf("El valor ascii de \"%c\" es %d.\n", a, a);

    putchar('\n');

    system("pause");


}