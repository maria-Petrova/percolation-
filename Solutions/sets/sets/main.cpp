#include "funcs.h"

void main() {
  int numb = 100;
  int n = 5;
  int m = 5;
  int size = n * m + 2 * n;
  sets set(size);
  int count;
  double res = 0;
    for (int i = 0; i < numb; i++) {
      preparation(&set, n, m);
      count = 0;
      countino(&set, count, n, m);
      res += count * 1.0 / n / m;
    }
    std::cout <<"percentage = " << (res / numb)
    << std::endl;
  system("pause");
}
