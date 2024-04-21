/*Este ejemplo recoge dos caracteres del buffer del teclado y verifica que sean diferentes */

#include "librerias.h"

void main(void)
{
    int a, b;

    puts("Dame dos caracteres juntos y te dire si son iguales o diferentes");
    a = getchar();
    b = getchar();

    system("cls");

    if (a - b)
        puts("Los valores leidos son diferentes");
    else   
        puts("Los valores leidos son iguales");

    putchar('\n');

    system("pause"); 
}