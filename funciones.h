#include <stdio.h>
#include <math.h>

double serie(int repet);
double factorial(int fac);

double serie(int repet) {

  int grados = 360;
  double radianes = 0;
  double fac = 0;
  double total = 0;
  int i = 0;

  radianes = (grados * M_PI) / 180;

  for(i = 0; i <= repet; i++) {

    fac = factorial(2 * i + 1);
    total += (pow(-1, i) * (pow(radianes, (2 * i) + 1) / fac));

    printf("x = %d para y = %f\n", i, total);
  }
  return total;
}


double factorial(int fac) {

  if(fac == 0 || fac == 1) {
    return 1;
  } else {
    return (fac * factorial(fac - 1));
  }
}
