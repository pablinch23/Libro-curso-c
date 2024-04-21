/*En este ejemplo se recogen cuatro caracteres y los imprime despues de encontrar el retorno de carro.
    Sugerencia de corrida de programa: Dar varios enter*/

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    puts("Dame 4 caracteres: ");
    putchar(getchar());
    putchar(getchar());
    putchar(getchar());
    putchar(getchar());
    
    putchar('\n');

    system("pause");
}