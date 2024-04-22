/*En este ejemplo se ejecuta la misma tarea del programa anterior pero la suma tambien se lleva a cabo en una funcion */
/*Autor: Pablo Chavez*/

#include "librerias.h"

int suma(int a, int b)
{
    return(a + b);
}

int multi(int a, int b)
{
    return(a * b);
}

void main(void)
{
    int a, b, c, d;

    puts("Dame cuatro numeros separados por un espacio");
    puts("Te dare el esultado de el producto de la suma de los dos primeros numeros por la suma de los dos ultimos : (x+y)*(z+w)");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    system("cls");

    printf("El resultado de (%d + %d) * (%d + %d) es: %d", a, b, c, d, multi(suma(a,b), suma(c,d)));

    putchar('\n');

    system("pause");
}
