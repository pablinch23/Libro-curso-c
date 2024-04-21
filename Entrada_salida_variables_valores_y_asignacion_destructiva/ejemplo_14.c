/*En este ejemplo se ejecuta la lectura e impresion con formato */

#include "librerias.h"

void main(void)
{
    float a;
    int b;
    char c;

    puts("Dame un real, una coma, un entero, un punto y coma, y un caracter, todos juntos ejem: x.y,x;a");
    scanf("%f,%d;%c", &a, &b, &c);

    system("cls");

    printf("%f %d %c\n", a, b, c);
    
    putchar('\n');

    system("pause");

}