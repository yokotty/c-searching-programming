#include <stdio.h>
#include <stdlib.h>
#define MAX_NUM 20000

int main()
{
  int x, y, i;

  for (x = 2; x < MAX_NUM; x++) {
    y = x + 1;
    int x_pf_sum = 0, y_pf_sum = 0;
    int x_div = x, y_div = y;

    for (i = 2; i <= y/2+1; i++) {
      while (x_div % i == 0) {
        x_pf_sum += i;
        x_div = x_div / i;
      }

      while (y_div % i == 0) {
        y_pf_sum += i;
        y_div = y_div / i;
      }
    }

    if (x_pf_sum == 0) x_pf_sum = x;
    if (y_pf_sum == 0) y_pf_sum = y;

    if (x_pf_sum > 0 & y_pf_sum > 0 & x_pf_sum == y_pf_sum)
      printf("%d\t%d\n", x, y);
  }
}
