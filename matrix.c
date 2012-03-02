#include <stdio.h>

main()
{
int i,j,a;
int m[5][3];

for(i=0;i<5;i++)
{
  for(j=0;j<3;j++)
  {
    m[i][j]=i*j;
  }
}


for(i=0;i<5;i++)
{
  for(j=0;j<3;j++)
  { 
    a = 3 * i + j;
    printf("%i " ,*(*(m+i)+j) );
  }
  printf("\n");
 }
}
