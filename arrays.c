#include <stdio.h>


main(){

 int a[10];
 int i,b;

 for(i=0;i<10;i++){
   a[i]=i;
 }

 for(i=0;i<10;i++){
   printf("%d\n",*(a+i));
 }
}
