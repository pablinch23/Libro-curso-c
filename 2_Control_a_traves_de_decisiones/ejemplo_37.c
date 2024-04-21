/*En este ejemplo lee un digito mayor que 0 e imprime la sumatoria de los primeros numeros naturales hasta el valor leido*/
/*Autor: Pablo Chavez*/

#include "librerias.h"

void main(void)
{
    int a, b;

    puts("Dame un numero mayor que 0 y menor que 10: ");
    scanf("%d", &a);

    system("cls");

    b = a;
    switch (a)
    {
        case 9: a = a + 8;
        case 8: a = a + 7;
        case 7: a = a + 6;
        case 6: a = a + 5;
        case 5: a = a + 4;
        case 4: a = a + 3;
        case 3: a = a + 2;
        case 2: a = a + 1;
        case 1: ;
    }
    printf("La sumatoria de los primeros %d naturales es: %d \n", b, a);

    putchar('\n');

    system("pause");
}