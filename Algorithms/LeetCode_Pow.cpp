#include <math.h>

class Solution {
public:
  double myPow(double x, int n) {
    double multiple = x;
    long square = abs(n);

    if (square == 0 || x == 1.00000)
      return 1;
    else if (x == -1.00000 && square % 2 == 0)
      return 1;
    else if (x == -1.00000 && square % 2 != 0)
      return -1;

    for (int i = 0; i < square - 1; i++)
    {
      if (x >= 1000000)
        break;
      x *= multiple;
    }

    if (n >= 0)
      return x;

    return 1 / x;
  }
};