#include <stdio.h>

int abs(int x) {
  if (x > 0)
    return x;
  else
    return -x;
}

double fabs(double x) {
  if (x > 0)
    return x;
  else
    return -x;
}

int main() {

  int x = -123;
  double y = -456.789;
  printf("%d\n", abs(x));
  printf("%f\n", fabs(y));
  return 0;
}
