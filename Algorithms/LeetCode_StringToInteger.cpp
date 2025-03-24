//#include <string>
//#include <limits.h>
//using namespace std;
//
//class Solution {
//public:
//    int myAtoi(string s) {
//        long long result = 0;
//        long long positive = 1;
//        bool startNum = false;
//        bool start = false;
//
//        for (auto c : s)
//        {
//            if (startNum && (c < 48 || c > 57))
//                break;
//            else if (c == ' ')
//                continue;
//            else if (!startNum && c == '-')
//            {
//                startNum = true;
//                positive *= -1;
//                continue;
//            }
//            else if (!startNum && c == '+')
//            {
//                startNum = true;
//                continue;
//            }
//            else if (!start && c == 48)
//            {
//                startNum = true;
//                continue;
//            }
//            else if (c < 48 || c > 57)
//                break;
//
//            start = true;
//            startNum = true;
//
//            int digit = c - 48;
//            result *= 10;
//            result += digit;
//
//
//            if (result * positive > INT_MAX)
//                return INT_MAX;
//            else if (result * positive < INT_MIN)
//                return INT_MIN;
//        }
//
//        return result * positive;
//    }
//};
//
////int main()
////{
////    Solution s;
////    s.myAtoi(" -042");
////}