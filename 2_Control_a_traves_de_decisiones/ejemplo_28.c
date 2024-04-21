/*En este ejemplo se ilustra el concepto de evaluacion presezosa, utilizado por el compilador de C y el orden de evaluacion impuesto por los operadores && y ||*/

#include "librerias.h"

void main(void)
{
    int a = -2, b = -1, c = 0, d = 1, e = 2;

    system("cls");
    
    puts("Lazy eval: primera parte: \n");
    printf("Variables a utilizar: %d, %d, %d, %d, %d.\n", a, b, c, d, e);
    if(++a && ++b && ++c && ++d && ++e)
        puts("Primer if exitoso!");
    printf("%d, %d, %d, %d, %d.\n", a, b, c, d, e);   
    puts("Segunda parte");
    a = b = c = -1;
    d = 0;
    e = 1;
    printf("Nuevas variables: %d, %d, %d, %d, %d.\n", a, b, c, d, e);
    if(++a || ++b || ++c || ++d || ++e)
        puts("Segundo if exitoso!");
    printf("%d, %d, %d, %d, %d.\n", a, b, c, d, e); 

    putchar('\n');

    system("pause");
}