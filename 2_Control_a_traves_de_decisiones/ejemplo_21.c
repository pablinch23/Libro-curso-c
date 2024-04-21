/*En este ejemplo se lee un numero entero y revisa si su valor es igual o diferente a 0 e imprime si es igual o diferente de 0*/

#include "librerias.h"

void main(void)
{
    int a;

    puts("Dame un numero entero: ");
    scanf("%d", &a);

    system("cls");

    if(a)
        puts("If exitoso, el valor leido es diferente de cero");
    else   
        puts("If fracasado, el valor leiodo es igual a cero");

    putchar('\n');

    system("pause");
}