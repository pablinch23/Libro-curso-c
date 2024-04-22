/*En este ejemplo se ejecuta la misma tarea que el ejemplo anterior pero introduce el uso de prototipos*/
/*Autor: Pablo Chavez*/

#include "librerias.h"

void primera(char);
int segunda(char);
float tercera(char);

void main(void)
{
    char alfa;                      //se declara alfa
    puts("Dame un caracter:");      
    alfa = getchar();               //se ingresa el caracter
    system("cls");

    primera(alfa);                      //manda a llamar a la funcion
    printf("\n%d\n", segunda(alfa));    //Llama a la función segunda para imprimir el valor ASCII del caracter ingresado.
    printf("%f\n", tercera(alfa));

    system("pause");
}

void primera(char alfa)     //Se declara la funcion primera, recibe como parametro alfa, esta imprimira el valor de alfa
{
    putchar(alfa);
}

int segunda(char alfa)      //Esta funcion recibe como parametro alfa, retorna el valor de alfa convertido en entero, el numero sera su equivalente del codigo ascii
{
    return((int)alfa);
}

float tercera(char alfa)    //Esta funcion recibe como parametro alfa, retorna el valor de alfa convertido en flotante
{
    return((float)alfa);
}