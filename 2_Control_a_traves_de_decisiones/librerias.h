#include <assert.h>	        //Contiene la macro assert (aserción), utilizada para detectar errores lógicos y otros tipos de fallos en la depuración de un programa.
#include <complex.h>	    //Conjunto de funciones para manipular números complejos (nuevo en C99).
#include <ctype.h>	        //Contiene funciones para clasificar caracteres según sus tipos o para convertir entre mayúsculas y minúsculas independientemente del conjunto de caracteres (típicamente ASCII o alguna de sus extensiones).
#include <errno.h>	        //Para analizar los códigos de error devueltos por las funciones de biblioteca.
#include <fenv.h>	        //Para controlar entornos en coma flotante (nuevo en C99).
#include <float.h>	        //Contiene la definición de constantes que especifican ciertas propiedades de la biblioteca de coma flotante, como la diferencia mínima entre dos números en coma flotante (_EPSOLON), el número máximo de dígitos de precisión (_DIG), o el rango de valores que se pueden representar (_MIN, _MAX).
#include <inttypes.h>	    //Para operaciones de conversión con precisión entre tipos enteros (nuevo en C99).
#include <iso646.h>	        //Para utilizar los conjuntos de caracteres ISO 646 (nuevo en NA1).
#include <limits.h>	        //Contiene la definición de constantes que especifican ciertas propiedades de los tipos enteros, como rango de valores que se pueden representar (_MIN, _MAX).
#include <locale.h>	        //Para la función setlocale() y las constantes relacionadas. Se utiliza para seleccionar el entorno local apropiado (configuración regional).
#include <math.h>	        //Contiene las funciones matemáticas comunes.
#include <setjmp.h>	        //Declara las macros setjmp y longjmp para proporcionar saltos de flujo de control de programa no locales.
#include <signal.h>	        //Para controlar algunas situaciones excepcionales como la división por cero.
#include <stdarg.h>	        //Posibilita el acceso a una cantidad variable de argumentos pasados a una función.
#include <stdbool.h>	    //Para el tipo booleano (nuevo en C99).
#include <stdint.h>	        //Para definir varios tipos enteros (nuevo en C99).
#include <stddef.h>	        //Para definir varios tipos de macros de utilidad.
#include <stdio.h>	        //Proporciona el núcleo de las capacidades de entrada/salida del lenguaje C (incluye la venerable función printf).
#include <stdlib.h>	        //Para realizar ciertas operaciones como conversión de tipos, generación de números pseudo-aleatorios, gestión de memoria dinámica, control de procesos, funciones de entorno, de señalización (??), de ordenación y búsqueda.
#include <string.h>	        //Para manipulación de cadenas de caracteres.
#include <tgmath.h>	        //Contiene funcionalidades matemáticas de tipo genérico (type-generic) (nuevo en C99).
#include <time.h>	        //Para tratamiento y conversión entre formatos de fecha y hora.
#include <wchar.h>	        //Para manipular flujos de datos anchos y varias clases de cadenas de caracteres anchos (2 o más bytes por carácter), necesario para soportar caracteres de diferentes idiomas (nuevo en NA1).
#include <wctype.h>	        //Para clasificar caracteres anchos (nuevo en NA1).