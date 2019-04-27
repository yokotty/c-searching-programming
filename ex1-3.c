#include <stdio.h>
#include <math.h>

int main()
{
  int i, j, k;
  for(i=1000; i<=9999; i++) {
    int count = 0;
    for(j=1; pow(j,3)<=i ; j++) {
      for(k=j; pow(k,3)<=i; k++) {
        int powsum = pow(j,3) + pow(k,3);
        if(powsum == i) {
          count++;
          printf("%d^3 + %d^3 = %d\n",j,k,i);
          break;
        } else if (powsum >= i){
          break;
        }
      }
    }
    if (count == 2) {
      printf("%d\n", i);
      break;
    }
  }
}
