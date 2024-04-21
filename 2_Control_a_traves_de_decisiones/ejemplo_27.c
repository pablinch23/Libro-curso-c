/*En este ejemplo se leen dos enteros y ejecuta operaciones logicas con ambos valores, imprime el valor arrojado por el operador (el cual solo puede ser 0 o 1)
    ejemplo 0 0, 0 1, 1 0, 1 1*/

#include "librerias.h"

void main(void)
{
    int a, b;

    puts("Dame el entero a y el entero b (solo puede ser 0 o 1, ejemplo 0 0, 0 1, 1 0, 1 1) sepadados por un espacio");
    scanf("%d %d", &a, &b);

    system("cls");

    printf("Valor de a && b : %d. \n", a && b );
    printf("Valor de a || b : %d. \n", a || b);
    printf("Valor de !a : %d.\n", !a);
    printf("Valor de !b : %d.\n", !b);

    putchar('\n');

    system("pause");
}