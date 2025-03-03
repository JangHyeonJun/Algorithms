//#include <limits>
//#include <cstdlib>
//
//
//class Solution {
//public:
//    int reverse(int x) {
//        long long devider = 1, multiple = 1;
//        long long result = 0;
//
//        while (llabs(devider) <= llabs(x))
//            devider *= 10;
//        devider /= 10;
//
//        while (llabs(x) > 0)
//        {
//            long long n = x / devider;
//            
//            result += n * multiple;
//            x -= n * devider;
//
//            devider /= 10;
//            multiple *= 10;
//        }
//
//        if (result > INT_MAX || result < INT_MIN)
//            return 0;
//
//        return result;
//    }
//};