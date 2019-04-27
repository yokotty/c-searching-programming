#include <stdio.h>
#define PRINT1 printf("x = %d\ty = %d\t\n", j, k)
#define PRINT2 \
printf("i = %.8g\tl = %.8g\tf = %.8g\td = %.8g\t\n", \
(double)i, (double)l, (double)f, (double)d);

int main()
{
  double d = 4.5; float f; long l; int i=3,j,k;

  j = (k=d/i)*3;
  PRINT1;
  k = (j=d/i)*3;
  PRINT1;
  k = d * (j=4.4/d);
  PRINT1;
  k = d * (j=((int)2.8+1.2)/d);
  PRINT1;

  i = l = f = d = 200/7;
  PRINT2;
  d = f = l = i = 200/7;
  PRINT2;
  i = l = f = d = (double)200/7;
  PRINT2;
  d = f = l = i = (double)200/7;
  PRINT2;
  i = l = f = d = (double)(200000/7);
  PRINT2;
  d = f = l = i = 200000/7;
  PRINT2;
}