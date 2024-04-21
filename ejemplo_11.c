/*Este ejercicio lee un caracter y lo imprime en dos ocasiones, despues imprime "B" dos veces
    Se nota el soble papel que juega el operador "=" */

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char alfa;
    
    puts("Dame un caracter: ");
    putchar(alfa = getchar());
    putchar(alfa);
    putchar('\n');
    putchar(alfa = (100 + 100) / 3);
    putchar(alfa);

    putchar('\n');

    system("pause");

}
