//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    bool isPalindrome(int x) {
//        if (x < 0)
//            return false;
//
//        int temp = x;
//        int reversed = 0;
//
//        while (temp > 0)
//        {
//            reversed = reversed * 10 + temp % 10;
//            temp /= 10;
//        }
//
//        return x == reversed;
//    }
//};
//
//int main()
//{
//    Solution s;
//    s.isPalindrome(123454321);
//}