/*En este ejemplo se ilustra el orden de evaluacion de los argumentos de la funcion ">", si se imprime 340 el orden de evaluacion es de izquierda a derecha,
    y si se imprime 430 el orden de evaluacion es de derecha a izquierda*/
/*Autor: Pablo Chavez*/

#include "librerias.h"

void main(void)
{
    printf("%d\n", putchar('3') > putchar('4'));
    putchar('\n');

    system("pause");
}
