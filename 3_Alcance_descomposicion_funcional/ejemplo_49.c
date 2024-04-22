/*En este ejemplo se leen dos numeros enteros e imprime el cociente en formato entero o de real segun lo solicite el usuario*/
/*Autor: Pablo Chavez*/

#include "librerias.h"

float cocef(int, int);
int cocei(int, int);

void main(void)
{
    int alfa, beta;
    puts("Dame dos numeros enteros separados por un espacio para saber el cociente");
    scanf("%d %d", &alfa, &beta);

    system("cls");

    puts("Imprimire el cociente.");
    puts("Quieres el resultado en entero? (s/n)");
    getchar();
    if('s' == getchar())
        printf("Cociente: %d\n", cocei(alfa, beta));
    else
        printf("Cociente: %f\n", cocef(alfa, beta));

    putchar('\n');

    system("pause");
}

int cocei(int a, int b)
{
    return(a/b);
}

float cocef(int a, int b)
{
    return((float)a / (float)b); 
}