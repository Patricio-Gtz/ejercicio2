/*
 * @brief   [Programa que calcula la serie de Taylor para un seno y lo guarda
 *           en un archivo .txt]
 * @author  [Diego Patricio Gutierrez]
 * @date    [1/febrero/2018]
 * @file    [tarea2.c funciones.h]
 */
#include "funciones.h"

// Prototipos de funciones
extern double factorial(int fac);
extern double serie(int repet);

/*
 * Recibe los datos desde terminal
 * @param  argc [variable que define cuantos datos a ingresado el usuario en
 *               terminal]
 * @param  argv [dato obtenido desde terminal]
 * @return      [0 si todo funciono bien]
 */
int main(int argc, char const *argv[]) {

  int num;

  // Solo deja recibir un numero
  if(argc > 2) {
    printf("Demasiados argumentos...\n");
  } else {
    // Convierte en numero ingresado de un char a un int
    sscanf(argv[1], "%d", &num);
    serie(num);
  }

  return 0;
}
