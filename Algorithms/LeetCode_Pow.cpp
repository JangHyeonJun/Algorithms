//#include <math.h>
//
//class Solution {
//
//  double divideConquerPow(double x, int n)
//  {
//    if (n == 0)
//      return 1;
//    else if (n == 1)
//      return x;
//    else if (n % 2 == 0)
//      return divideConquerPow(x * x, n / 2);
//    else
//      return x * divideConquerPow(x * x, n / 2);
//  }
//public:
//  double myPow(double x, int n) {
//    return n >= 0 ? divideConquerPow(x, n) : 1 / divideConquerPow(x, n);
//  }
//};
//
//int main()
//{
//  Solution s;
//  //auto result = s.myPow(8.84372, -5);
//  auto result2 = s.myPow(2, 10);
//
//  return 0;
//}