#include <cstdio>

template <typename T> T abs(T x) {
  if (x > 0)
    return x;
  else
    return -x;
}
int main() {

  int x = -123;
  double y = -456.789;
  printf("%d\n", abs(x));
  printf("%f\n", abs(y));
  return 0;
}
