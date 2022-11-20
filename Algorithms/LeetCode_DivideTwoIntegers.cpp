//#include <math.h>
//#include <limits>
//
//class Solution {
//public:
//    int divide(int dividend, int divisor) {
//
//        bool isPositiveQuotient = (dividend > 0 && divisor > 0) || (dividend < 0) && (divisor < 0);
//
//        long long absDividend = abs(dividend);
//        long long absDivisor = abs(divisor);
//
//        long long sum = 0;
//        long long quotient = 0;
//
//        long long tempDivisor = 0;
//        long long tempCount = 0;
//
//        bool isOver = false;
//        while (absDividend > sum)
//        {
//            if (isOver == false)
//            {
//                tempDivisor += absDivisor;
//                tempCount++;
//            }
//
//            sum += tempDivisor;
//            quotient += tempCount;
//
//            while (absDividend  < sum)
//            {
//                isOver = true;
//                tempDivisor -= absDivisor;
//                tempCount--;
//
//                sum -= tempDivisor;
//                quotient -= tempCount;
//            }
//        }
//        quotient--;
//
//        if (quotient >= INT_MAX && isPositiveQuotient)
//            return INT_MAX;
//
//        if (-quotient <= INT_MIN && isPositiveQuotient)
//            return INT_MIN;
//
//        return isPositiveQuotient ? quotient : -quotient;
//    }
//};