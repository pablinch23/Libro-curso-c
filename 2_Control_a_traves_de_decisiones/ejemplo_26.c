/*En este ejemplo se leen dos enteros y los compara si es menor, mayor o igual*/

#include "librerias.h"
void main(void)
{
    int a, b;

    puts("Dame el entero \"a\" y el entero \"b\" separados por un espacio ");
    scanf("%d %d", &a, &b);

    system("cls");

    if(a > b)
        puts("a es mayor que b");
    if(a < b)
        puts("a es menor que b");
    if(a == b)
        puts("a es igual a b");

    putchar('\n');

    system("pause");
}