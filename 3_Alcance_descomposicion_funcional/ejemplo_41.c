/*En este ejemplo se imrime la letra M, un retorno de carro, la letra H y otro retorno de carro. Este ejemplo ilustra una mala practica que es el uso de las variables globales*/
/*Autor: Pablo Chavez*/

#include "librerias.h"

void prim(void);    //Estos son los prototipos de las funciones que se utilizaran
void segn(void);

char a = 'H';       //Se declara la variable global, esta se puede ocupar en todo el programa 

void main(void)
{
    system("cls");

    prim();
    segn();

    system("pause");
}

void prim(void)
{
    char a = 'M';
    putchar(a);     //Se declara una variable local 
    putchar('\n');
}

void segn(void)
{
    putchar(a);     //Se manda a llamar la variable global y la imprime
    putchar('\n');
}

