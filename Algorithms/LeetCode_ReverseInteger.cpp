//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    int reverse(int x) {
//        int result = 0;
//
//        while (x)
//        {
//            if (result > INT_MAX / 10 || result < INT_MIN / 10)
//                return 0;
//            result = result * 10 + x % 10;
//            x /= 10;
//        }
//
//        return (int)result;
//    }
//};
//
//int main()
//{
//    Solution s;
//    s.reverse(54341);
//}