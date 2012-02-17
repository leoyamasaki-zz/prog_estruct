#include <stdio.h>

/* Convierte grados Fahrenheit a Celcius usando un for()*/

int main ( int argc, char *argv[] ){

  int fahr;
   
  for(fahr = 0; fahr <= 300;fahr = fahr + 20) {
    printf("%3d\t%6.3f\n",fahr,(5.0/9.0) * (fahr - 32));
  }
}

