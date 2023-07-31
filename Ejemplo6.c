/*
  Suena la campana 5 veces e imprime un letrero, un caracter de retorno de carro y uno de alimentacion de linea.
*/

#include <stdio.h>

void main(void)
{
  putchar('\007');
  putchar('\007');
  putchar('\007');
  putchar('\007');
  putchar('\007');
  
  puts("Probando salida sin formato. \013\011");
  
}
