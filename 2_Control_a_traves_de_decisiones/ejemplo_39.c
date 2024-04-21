/*En este ejemplo lee dos numeros enteros y los compara a traves de un operador de decision taquigrafico*/
/*Autor: Pablo Chavez*/

#include "librerias.h"

void main(void)
{
    int a, b;

    puts("Dame dos valores enteros separados por un espacio");
    scanf("%d %d", &a, &b);

    system("cls");

    (a < b) ? puts("El primer valor es menor"):
                puts("El primer valor no es menor");

    putchar('\n');

    system("pause");
}