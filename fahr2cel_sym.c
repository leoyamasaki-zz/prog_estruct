/* Convierte grados Fahrenheit a Celcius usando un for()*/

#include <stdio.h>
#define LOWER 0
#define UPPER 400
#define STEP  20

int main ( int argc, char *argv[] ){

  int fahr;
   
  for(fahr = LOWER; fahr <= UPPER;fahr = fahr + STEP) {
    printf("%3d\t%6.1f\n",fahr,(5.0/9.0) * (fahr - 32));
  }
}

