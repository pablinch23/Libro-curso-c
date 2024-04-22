/*En este ejemplo se recogen dos caracteres del buffer del teclado e imprime el valor arrojado por el operador de comparacion ">", pero el valor de su evaluacion estara en funcion del
    orden de evaluacion de sus argumentos*/
/*Autor: Pablo Chavez*/

#include "librerias.h"

void main(void)
{
    printf("%d\n", getchar() > getchar());
    
    putchar('\n');

    system("pause");
}
