/*En este ejemplo se leen dos numeros enteros y pregunta al usuario si desea multiplicarlos o sumarlos, en cuyo caso pone en marcha la operacion pertinente, o si el usuario
    solicita una opcion inexistente o los vslores son negativos el programa imprime un mensaje de error*/
/*Autor: Pablo Chavez*/

#include "librerias.h"

int suma(int, int);
int multiplicacion(int, int);

void main(void)
{
    int a, b;
    char c;
    puts("Dame dos numeros naturales separados por un espacio para sumarlos o multiplicarlos");
    scanf("%d %d", &a, &b);
    getchar();      // fflush(stdin);
    puts("\nDime el operador(s=suma, m=multiplicacion); ");
    scanf("%c",&c);
    if(c == 's')
        a = suma(a,b);
    else
    if(c == 'm')
        a = multiplicacion(a,b);
    else
    {
        puts("Operacion desconocida");
        return;
    }
    switch (a)
    {
    case -1 : puts("Imposible hacer la suma"); break;
    case -2 : puts("Imposible hacer la multiplicacion"); break;
    default : puts("El resultado es: "); printf("%d\n",a);  break;
    }

    putchar('\n');

    system("pause");
}

int suma(int a, int b)
{
    if((a > 0) && (b > 0))
        return(a + b);
    else    
        return(-1);
}

int multiplicacion(int a, int b)
{
    if((a > 0) && (b > 0))
        return(a * b);
    else
        return(-2);
}