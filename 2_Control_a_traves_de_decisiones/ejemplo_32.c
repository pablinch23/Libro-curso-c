/*En este ejemplo se recoge un caracter del buffer del teclado y lo clasifica, version sin operadores logicos*/

#include "librerias.h"

void main(void)
{
    char a;

    puts("Dame un caracter:");
    a = getchar();

    system("cls");

    if(a >= '0')
        if(a > '9')
            if(a >= 'A')
                if(a > 'Z')
                    if(a >= 'a')
                        if(a > 'z')
                            puts("Mayor que z");
                        else   
                            puts("Minuscula");
                    else    
                        puts("Entre mayusculas y minusculas");
                else    
                    puts("Mayuscula");
            else
                puts("Entre mayusculas y digitos");
        else
            puts("Digito");
    else
        puts("Menor que digitos");
        

    putchar('\n');

    system("pause");
}
