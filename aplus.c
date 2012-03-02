#include <stdio.h>

main(){

  int a=10, b1=0,b2=0,c1=0,c2=0;
  c1=(b1 = ++a ) + 1; c2=(b2 = a++) + 1;
  printf("c=++a:%d b=%d c=a++:%d b=%d\n",c1,b1,c2,b2);

 }

