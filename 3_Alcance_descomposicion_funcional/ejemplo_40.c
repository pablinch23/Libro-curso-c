/*En este ejemplo se imprime la palabra HOLA y un retorno de carro*/
/*Autor: Pablo Chavez*/

#include "librerias.h"
void main(void)
{
    system("cls");

    char a = '\n'; //Se le asigna a la variable 'a' el retorno de carro 
    {
        char a = 'A'; // se le asigna a la variable 'a' la letra A 
        {
            char a = 'L';
            {
                char a = 'O';
                {
                    char a = 'H'; 
                    putchar(a); //Imprimira la letra H ya que es el ultimo valor de a e ira imprimiendo las letras de acuerdo a la estructura y orden que tiene
                }
                putchar(a);
            }
            putchar(a);
        }
        putchar(a);
    }
    putchar(a);

    system("pause");
}
