/*En este ejemplo se leen cuatro valores enteros e imprime el producto de la suma de los dos primeros numeros por la suma de los dos ultimos*/
/*Autor: Pablo Chavez*/

#include "librerias.h"

void main(void)
{
    int a, b, c, d;

    puts("Dame cuatro numeros separados por un espacio");
    puts("Te dare el esultado de el producto de la suma de los dos primeros numeros por la suma de los dos ultimos : (x+y)*(z+w)");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    system("cls");

    printf("El resultado de (%d + %d) * (%d + %d) es: %d", a, b, c, d, (a + b)*(c + d));
    putchar('\n');

    system("pause");
}
