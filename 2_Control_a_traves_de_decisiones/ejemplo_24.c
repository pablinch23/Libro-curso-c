/*En este ejemplo se recoge un valor entero del buffer del teclado y efectua nueve pruebas sobre el valor*/

#include "librerias.h"

void main(void)
{
    int a;

    puts("Dame un numero entero");
    scanf("%d", &a);

    system("cls");

    if(a % 2 == 0)
        puts("El numero es exactamente divisible entre 2.");
    if(a % 3 == 0)
        puts("El numero es exactamente divisible entre 3.");
    if(a % 4 == 0)
        puts("El numero es exactamente divisible entre 4.");
    if(a % 5 == 0)
        puts("El numero es exactamente divisible entre 5.");
    if(a % 6 == 0)
        puts("El numero es exactamente divisible entre 6.");
    if(a % 7 == 0)
        puts("El numero es exactamente divisible entre 7.");
    if(a % 8 == 0)
        puts("El numero es exactamente divisible entre 8.");
    if(a % 9 == 0)
        puts("El numero es exactamente divisible entre 9.");
    if(a % 10 == 0)
        puts("El numero es exactamente divisible entre 10.");
    putchar('\n');

    system("pause");
}