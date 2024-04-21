/*En este ejemplo lee dos valores enteros, los usa como argumentos de los operadores de comparacion e imprime el valor arrojado por la operacion
    (El cual solo puede ser 0 o 1)*/

#include "librerias.h"

void main(void)
{
    int a, b;

    puts("Dame dos numeros enteros separados por un espacio");
    scanf("%d %d", &a, &b);

    system("cls");

    printf("Valor de a > b : %d.\n", a > b);
    printf("Valor de a < b : %d.\n", a < b);
    printf("Valor de a >= b : %d.\n", a >= b);
    printf("Valor de a <= b : %d.\n", a <= b);
    printf("Valor de a == b : %d.\n", a == b);
    printf("Valor de a != b : %d.\n", a != b);

    putchar('\n');

    system("pause");
}