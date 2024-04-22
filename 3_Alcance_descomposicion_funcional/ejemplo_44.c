/*En este ejemplo se recoge un entero del teclado, lo imprime y luego lo duplica e imprime en tres ocasiones, para ello lee el valor desde una funcion y "retiene" dicho valor
    a traves de una variable de tipo static. 
    Analogamente al uso de la varibale global, el uso de la variable static ilustra una mala practica*/

/*Autor: Pablo Chavez*/

#include "librerias.h"

void main(void)
{
    int val = 1;                    //Se crea un variable e inicializa en 1
    printf("\t\t%d\n", fun(val));   //llama a la funcion fun con diferentes valores de val y muestra el resultado con printf
    val = val + 1;                  //se le aumenta el valor a val para la siguiente mandada a llamar 
    printf("\t\t%d\n", fun(val));
    val = val + 1;
    printf("\t\t%d\n", fun(val));
    val = val + 1;
    printf("\t\t%d\n", fun(val));

    putchar('\n');
    system("pause");
}

int fun(int b)  //Fun es una funcion que toma como argumento b de tipo entero
{
    static int a;   //Variable estatica que se inicializa una sola vez cuando se llama a la funcion b = 1
    if(b == 1) //Si b es igual a 1, se solicita el valor a ingresar
    {
        puts("Dame un valor entero");
        scanf("%d", &a);
    }
    else    //si no es igual, duplicara el valor actual
        a = a + a;
    return(a);
}