/*En este ejemplo se permite conocer el orden de evaluacion de los argumentos en la llamada a una funcion.
    Si la salida es 6 7 6 5 es de izquierda a derecha
    Si la salida es 5 4 3 4 es de derecha a izquierda*/ 
/*Autor: Pablo Chavez*/

#include "librerias.h"

void imprime(int, int, int, int);

void main(void)
{
    int a = 5;
    imprime(a = a + 1, a = a + 1, a = a -1, a = a - 1);

    putchar('\n');

    system("pause");
}

void imprime(int a, int b, int c, int d)
{
    printf("%d %d %d %d", a, b, c, d);
}
