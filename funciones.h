/*
 * @brief   [Funciones para el programa de tarea2]
 * @author  [Diego Patricio Gutierrez]
 * @date    [1/febrero/2018]
 * @file    [tarea2.c funciones.h]
 */
#include <stdio.h>
#include <math.h>

// Prototipos de funciones
double serie(int grados, int iter);
double factorial(int fac);

/**
 * Calcula la serie de Taylor y la guarda en un archivo llamado result.txt
 * @param   int repet [numero de iteraciones elegidas por el usuario]
 * @return [0 si hay error, total si todo sale bien]
 */
double serie(int grados, int iter) {

  double radianes = 0, fac = 0, total = 0;
  int i = 0;

  radianes = (grados * M_PI) / 180;

  for(i = 0; i <= iter; i++) {
    // Calcula factorial
    fac = factorial(2 * i + 1);
    // Total del resultado
    total += (pow(-1, i) * (pow(radianes, (2 * i) + 1) / fac));
  }

  return total;
}

/**
 * Calcula el factorial de manera recursiva
 * @param     int fac [Recibe el numero del factorial a calcular]
 * @return     [1 si el numero es 0 ó 1, si es otro el numero calcula
 *              el factorial]
 * @obtenido [https://stackoverflow.com/questions/7212158/taylor-series-in-c]
 */
double factorial(int fac) {

  if(fac == 0 || fac == 1) {
    return 1;
  } else {
    return (fac * factorial(fac - 1));
  }
}
