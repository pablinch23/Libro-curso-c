/*En este ejemplo se leen dos enteros y revisa si el primero es menor que el segundo*/

#include "librerias.h"

void main(void)
{
	int a, b;
	
	puts("Dame el entero \"a\" y el entero \"b\" separados por un espacio y te dire si el primero es menor");
	scanf("%d %d", &a, &b);
	
	system("cls");
	
	if(a < b)
		puts("La expresion a < b es cierta");
	else
		puts("La expresion a < b es falsa");
	
	putchar('\n');
	
	system("pause");
}
