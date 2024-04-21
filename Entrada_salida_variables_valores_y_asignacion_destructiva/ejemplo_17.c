/*En este ejemplo se leen dos caracteres y multiplica los valores correspondientes a dichos caracteres segun el codigo ascii e imprime el producto*/

#include "librerias.h"

void main(void)
{
    char a, b;
    puts("Dame dos caracteres juntos; los multiplicare.");
    a = getchar();
    b = getchar();

    system("cls");

    printf("El valor ascii de \"%c\" es %d.\n", a, a);
    printf("El valor ascii de \"%c\" es %d.\n", b, b);

    printf("El resultado de la multiplicacion es: %d\n", a * b);

    putchar('\n');

    system("pause");

}