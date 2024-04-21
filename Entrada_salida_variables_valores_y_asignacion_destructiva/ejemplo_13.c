/*En este ejemplo se ven otros tipos de dato, los recogera y los imprimira*/

#include "librerias.h"

void main(void)
{
    int i;
    char e;
    float r;
    puts("Dame un entero, un caracter y un real en el mismo renglon y separado por un espacio \n");
    scanf("%d %c %f", &i, &e, &r);

    system("cls");
    
    printf("El valor de la variable entera es %d\n", i);
    printf("El valor del caracter es %c\n", e);
    printf("El valor de la variable entera es %f\n", r);
    printf("Los valores entero, caracter y real, son: %d, %c, %f.\n",i,e,r);

    putchar('\n');

    system("pause");
}