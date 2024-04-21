/*En este ejemplo se recogen 4 caracteres del buffer del teclado y los imprime en orden inverso */

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char a, b, c, d;
    puts("Dame 4 caracteres: ");
    a = getchar();
    b = getchar();
    c = getchar();
    d = getchar();
    putchar(d);
    putchar(c);
    putchar(b);
    putchar(a);

    putchar('\n');

    system("pause");
}