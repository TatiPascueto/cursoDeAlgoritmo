#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main () {

  
  int i, a, b;
  
  srand(time(NULL));

  int numeroDeVacasAbduzidas;

  a = 0;
  b= 20;
  // intervalo [a, b]

    numeroDeVacasAbduzidas = (rand() % (b-a)) + a;

  i=0;
  while (i < numeroDeVacasAbduzidas){
    printf("Vaca número %d abduzida, faltam %d vacas\n", i, numeroDeVacasAbduzidas -i);
    i++;
;  }

  
  return 0;
}