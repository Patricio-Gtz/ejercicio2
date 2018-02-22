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
extern double serie(int grados, int iter);

/*
 * Recibe los datos desde terminal
 * @param  argc [variable que define cuantos datos a ingresado el usuario en
 *               terminal]
 * @param  argv [dato obtenido desde terminal]
 * @return      [0 si todo funciono bien]
 */
int main(int argc, char const *argv[]) {

  int num = 360, iteraciones, i = 0;
  double seno = 0;
  double funcionSin = 0;

  FILE *file = fopen("result.dat", "w");
  FILE *file2 = fopen("resultSin.dat", "w");
  // Verifica si el archivo esta disponible
  if(!file) {
    printf("Error en el archivo...");
    return 0;
  }
  // Solo deja recibir un numero
  if(argc > 3) {
    printf("Demasiados argumentos...\n");
  } else {
    // Convierte en numero ingresado de un char a un int
    sscanf(argv[1], "%d", &iteraciones);
    // Itera 360 grados
    for (i = 0; i <= num; i++) {
      seno = serie(i, iteraciones);
      fprintf(file, "%d\t%f\n", i, seno);
      // Lo hace por medio de la funcion sin de math.h
      funcionSin = sin((i*M_PI)/180);
      fprintf(file2, "%d\t%f\n", i, funcionSin);
    }
  }

  fclose(file);
  fclose(file2);

  return 0;
}
