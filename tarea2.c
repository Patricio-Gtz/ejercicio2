#include "funciones.h"

//extern double factorial(int fac);
extern double serie(int repet);

int main(int argc, char const *argv[]) {

  int num;

  if(argc > 2) {
    printf("Demasiados argumentos...\n");
  } else {
    sscanf(argv[1], "%d", &num);
    serie(num);
  }

  return 0;
}
