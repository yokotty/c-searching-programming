#include <stdio.h>

int main()
{
  int x = 1, y, z;

  x *= y = z = 5;
  printf("x=%d\ty=%d\tz=%d\n", x, y, z);
  x = y == z;
  printf("x=%d\ty=%d\tz=%d\n", x, y, z);
  x == (y = z);
  printf("x=%d\ty=%d\tz=%d\n", x, y, z);

  x = 3; y = 3; z = 3;
  x += y += z;
  printf("x < y ? x ++ : y ++ = %d\n", x < y ? x ++ : y ++);
  printf("x=%d\ty=%d\tz=%d\n", x, y, z);
  // y = 6 なので の %d には y++ の戻り値 6 が入り、y = 7 となっている

  x = y = z = 1;
  ++x || ++y && ++z;
  printf("x=%d\ty=%d\tz=%d\n", x, y, z);
}
