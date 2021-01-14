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
//            int temp = (long)result * 10 + x % 10;
//            if (temp / 10 != result)
//                return 0;
//            result = temp;
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
//    s.reverse(1538474129);
//}